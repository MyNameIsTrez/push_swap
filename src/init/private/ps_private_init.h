/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_private_init.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 14:19:19 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 14:33:58 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_PRIVATE_INIT_H
# define PS_PRIVATE_INIT_H

typedef struct s_data	t_data;

t_status	parse_argv(t_i32 argc, char **argv, t_data *data);
t_status	sanitize_argc(t_i32 argc);

#endif
