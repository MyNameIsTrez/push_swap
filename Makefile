# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sbos <sbos@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2022/08/31 17:51:35 by sbos          #+#    #+#                  #
#    Updated: 2022/09/01 16:11:12 by sbos          ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

################################################################################

CC := cc

OBJ_DIR := obj

CFLAGS := -Wall -Wextra -Werror -Wconversion -Wpedantic -Wfatal-errors

################################################################################

LIBFT_PATH := ./submodules/libft
LIBFT_LIB_PATH := $(LIBFT_PATH)/libft.a
LIBFT := -L$(LIBFT_PATH) -lft

LIBS := $(LIBFT)

################################################################################

# PUSH_SWAP_SOURCES += $(shell find ./src -type f -name "*.c")

SHARED_SOURCES :=\
./src/error/private/ps_get_error.c\
./src/error/private/ps_get_error_ptr.c\
./src/error/ps_any_error.c\
./src/error/ps_print_error.c\
./src/error/ps_set_error.c\
./src/init/private/parse_argv/find_index.c\
./src/init/private/parse_argv/has_duplicate.c\
./src/init/private/get_max_radix_sort_operations.c\
./src/init/private/normalize.c\
./src/init/private/parse_argv.c\
./src/init/init.c\
./src/is_sorted.c

PUSH_SWAP_SOURCES :=\
./src/operations/functions/private/p.c\
./src/operations/functions/private/r.c\
./src/operations/functions/private/rrx.c\
./src/operations/functions/private/s.c\
./src/operations/functions/pa.c\
./src/operations/functions/pb.c\
./src/operations/functions/ra.c\
./src/operations/functions/rb.c\
./src/operations/functions/rr.c\
./src/operations/functions/rra.c\
./src/operations/functions/rrb.c\
./src/operations/functions/rrr.c\
./src/operations/functions/sa.c\
./src/operations/functions/sb.c\
./src/operations/functions/ss.c\
./src/operations/private/print_operations/get_operation_name.c\
./src/operations/add_operation_back.c\
./src/operations/add_operation_front.c\
./src/operations/call_operation.c\
./src/operations/print_operations.c\
./src/sort/private/add_and_execute_operations/add_and_execute.c\
./src/sort/private/iddfs/undo/pa.c\
./src/sort/private/iddfs/undo/pb.c\
./src/sort/private/iddfs/undo/ra.c\
./src/sort/private/iddfs/undo/rb.c\
./src/sort/private/iddfs/undo/rr.c\
./src/sort/private/iddfs/undo/rra.c\
./src/sort/private/iddfs/undo/rrb.c\
./src/sort/private/iddfs/undo/rrr.c\
./src/sort/private/iddfs/undo/sa.c\
./src/sort/private/iddfs/undo/sb.c\
./src/sort/private/iddfs/undo/ss.c\
./src/sort/private/iddfs/undo/undo_operation_call.c\
./src/sort/private/iddfs/dfs.c\
./src/sort/private/iddfs.c\
./src/sort/private/radix.c\
./src/sort/sort.c\
./src/push_swap.c

CHECKER_SOURCES :=\
./src/checker.c

################################################################################

# HEADERS += $(shell find ./src -type f -name "*.h")

HEADERS +=\
./src/error/private/ps_private_error.h\
./src/error/ps_error.h\
./src/error/ps_error_enum.h\
./src/init/private/parse_argv/ps_private_parse_argv.h\
./src/init/private/ps_private_init.h\
./src/init/ps_init.h\
./src/operations/functions/private/sl_private_operations_functions.h\
./src/operations/functions/ps_operations_functions.h\
./src/operations/private/print_operations/ps_private_print_operations.h\
./src/operations/private/ps_private_operations.h\
./src/operations/ps_operation_enum.h\
./src/operations/ps_operations.h\
./src/sort/private/add_and_execute_operations/ps_private_add_and_execute_operations.h\
./src/sort/private/iddfs/undo/ps_private_undo.h\
./src/sort/private/iddfs/ps_private_iddfs.h\
./src/sort/private/ps_private_sort.h\
./src/sort/ps_sort.h\
./src/structs/ps_struct_data.h\
./src/push_swap.h

################################################################################

ifdef O3
CFLAGS += -Ofast
endif

ifdef DEBUG
CFLAGS += -g3
endif

ifdef SAN
CFLAGS += -fsanitize=address
endif

ifdef BONUS
CFLAGS += -DBONUS=1
else
CFLAGS += -DBONUS=0
endif

################################################################################

ifdef BONUS
NAME := checker
SOURCES := $(SHARED_SOURCES) $(CHECKER_SOURCES)
else
NAME := push_swap
SOURCES := $(SHARED_SOURCES) $(PUSH_SWAP_SOURCES)
endif

FCLEANED_FILES := $(NAME)

OBJECT_PATHS := $(addprefix $(OBJ_DIR)/,$(SOURCES:.c=.o))

################################################################################

# Only cleans when MAKE_DATA changes.
DATA_FILE := .make_data
MAKE_DATA := $(CFLAGS) $(SOURCES)
ifneq ($(shell echo "$(MAKE_DATA)"), $(shell cat "$(DATA_FILE)" 2> /dev/null))
PRE_RULES := clean
endif

################################################################################

INCLUDES := $(sort $(addprefix -I, $(LIBFT_PATH) src))

################################################################################

.PHONY: all
all: $(PRE_RULES) $(NAME)

################################################################################

$(NAME): $(LIBFT_LIB_PATH) $(OBJECT_PATHS)
	$(CC) $(CFLAGS) $(OBJECT_PATHS) $(LIBS) -o $(NAME)
	@echo "$(MAKE_DATA)" > $(DATA_FILE)

################################################################################

$(LIBFT_LIB_PATH):
	git submodule update --init --recursive --rebase --quiet
	$(MAKE) -C $(LIBFT_PATH)

################################################################################

$(OBJ_DIR)/%.o: %.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

################################################################################

.PHONY: clean
clean:
	rm -rf $(OBJ_DIR)/

.PHONY: fclean
fclean: clean
	git submodule update --init --recursive --rebase --quiet
	rm -f $(FCLEANED_FILES)
	$(MAKE) -C $(LIBFT_PATH) fclean

.PHONY: re
re: fclean all

.PHONY: bonus
bonus:
	@$(MAKE) BONUS=1 all

################################################################################
