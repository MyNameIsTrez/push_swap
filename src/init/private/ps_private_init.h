/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_private_init.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 14:19:19 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 15:33:37 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_PRIVATE_INIT_H
# define PS_PRIVATE_INIT_H

typedef struct s_data	t_data;

t_status	normalize(t_data *data);
t_status	parse_argv(size_t argc, char **argv, t_data *data);

#endif
