/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   p.c                                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:09:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:09:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	p(t_deque *deque_from, t_deque *deque_to)
{
	int	*back;

	if (ft_deque_size(deque_from) == 0)
		return (false);
	back = ft_deque_back(deque_from);
	ft_deque_push_back(deque_to, back);
	ft_deque_pop_back(deque_from);
	return (true);
}
