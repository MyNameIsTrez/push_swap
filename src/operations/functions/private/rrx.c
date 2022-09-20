/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rrx.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:09:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:09:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	rrx(t_deque *deque)
{
	int	*front;

	if (ft_deque_size(deque) <= 1)
		return (false);
	front = ft_deque_front(deque);
	ft_deque_push_back(deque, front);
	ft_deque_pop_front(deque);
	return (true);
}
