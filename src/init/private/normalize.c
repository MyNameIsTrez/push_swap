/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   normalize.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 15:07:21 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 16:44:34 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "parse_argv/ps_private_parse_argv.h"

t_status	normalize(t_data *data)
{
	t_i32	*a2;
	size_t	len;
	size_t	i;

	a2 = ft_vector_from_deque(data->a);
	if (a2 == NULL)
		return (ERROR);
	len = ft_vector_get_size(a2);
	ft_bubble_sort(a2, len);
	if (has_duplicate(a2, len))
		return (ps_set_error(PS_E_DUPLICATE));
	i = 0;
	while (i < len)
	{
		*(int *)ft_deque_at(data->a, i) = find_index(a2, *(int *)ft_deque_at(data->a, i));
		i++;
	}
	ft_vector_free(&a2);
	return (OK);
}
