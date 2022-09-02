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

void	r(t_deque *deque, t_data *data)
{
	int	*back;

	// TODO: Should this function early-return if the deque is empty?
	back = ft_deque_back(deque);
	ft_deque_push_front(deque, back);
	ft_deque_pop_back(deque);
}
