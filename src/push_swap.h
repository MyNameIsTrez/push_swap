/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/31 17:53:30 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/31 18:28:38 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"

# include "checker/ps_checker.h"
# include "error/ps_error.h"
# include "init/ps_init.h"
# include "operations/ps_operations.h"
# include "sort/ps_sort.h"
# include "structs/ps_struct_data.h"

bool	ps_is_sorted(t_data *data);

#endif
