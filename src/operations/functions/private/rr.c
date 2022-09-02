/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   rr.c                                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:09:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:09:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_deque *deque, t_data *data)
{
	int	*front;

	// TODO: Should this function early-return if the deque is empty?
	front = ft_deque_front(deque);
	ft_deque_push_back(deque, front);
	ft_deque_pop_front(deque);
}
