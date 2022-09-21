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
	t_i32	*unnormalized_a;

	ft_bzero(data, sizeof(t_data));
	unnormalized_a = ft_vector_new_reserved(sizeof(t_i32), argc - 1);
	if (unnormalized_a == NULL)
		return (ERROR);
	if (parse_argv(argc, argv, &unnormalized_a) != OK)
		return (ERROR);
	if (normalize(data, unnormalized_a) != OK)
		return (ERROR);
	ft_vector_free(&unnormalized_a);
	data->b = ft_deque_new_reserved(sizeof(t_u32), argc - 1);
	if (data->b == NULL)
		return (ERROR);
	// TODO: Calculate the maximum size of operations so that push() can't fail anywhere
	data->operations = ft_deque_new_reserved(sizeof(t_operation), 999999);
	if (data->operations == NULL)
		return (ERROR);
	return (OK);
}
