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

t_status	normalize(t_data *data, t_i32 *unnormalized_a)
{
	size_t	len;
	t_i32	*sorted_unnormalized_a;
	size_t	i;
	size_t	index;

	len = ft_vector_get_size(unnormalized_a);
	sorted_unnormalized_a = ft_vector_copy(unnormalized_a);
	if (sorted_unnormalized_a == NULL)
		return (ERROR);
	ft_bubble_sort(sorted_unnormalized_a, len);
	if (has_duplicate(sorted_unnormalized_a, len))
		return (ps_set_error(PS_E_DUPLICATE));
	data->a = ft_deque_new_reserved(sizeof(t_u32), len);
	if (data->a == NULL)
		return (ERROR);
	i = 0;
	while (i < len)
	{
		index = find_index(sorted_unnormalized_a, unnormalized_a[i]);
		ft_deque_push_back(data->a, &index);
		i++;
	}
	ft_vector_free(&sorted_unnormalized_a);
	return (OK);
}
