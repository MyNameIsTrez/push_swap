/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   r.c                                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:09:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:09:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	r(t_deque *deque)
{
	int	*back;

	if (ft_deque_size(deque) <= 1)
		return (false);
	back = ft_deque_back(deque);
	ft_deque_push_front(deque, back);
	ft_deque_pop_back(deque);
	return (true);
}
