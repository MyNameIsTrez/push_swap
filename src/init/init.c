/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   init.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/31 18:12:26 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 15:33:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/ps_private_init.h"

t_status	ps_init(size_t argc, char **argv, t_data *data)
{
	ft_bzero(data, sizeof(t_data));
	data->a = ft_deque_new_reserved(sizeof(t_i32), argc - 1);
	if (data->a == NULL)
		return (ERROR);
	if (parse_argv(argc, argv, data) != OK)
		return (ERROR);
	if (normalize(data) != OK)
		return (ERROR);
	data->b = ft_deque_new_reserved(sizeof(t_i32), argc - 1);
	if (data->b == NULL)
		return (ERROR);
	data->operations = ft_vector_new(sizeof(t_operation));
	if (data->operations == NULL)
		return (ERROR);
	return (OK);
}
