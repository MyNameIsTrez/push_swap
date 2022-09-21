/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   is_sorted.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 17:53:29 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 17:53:29 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	ps_is_sorted(t_data *data)
{
	size_t	i;

	if (ft_deque_size(data->b) > 0)
		return (false);
	i = ft_deque_size(data->a) - 1;
	while (i > 0)
	{
		if (*(int *)ft_deque_at(data->a, i - 1) < *(int *)ft_deque_at(data->a, i))
			return (false);
		i--;
	}
	return (true);
}
