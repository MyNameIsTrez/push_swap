/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   s.c                                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:09:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:09:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	s(t_deque *deque, t_data *data)
{
	int	back_value;
	int	second_back_value;

	// TODO: Should this function early-return if the deque is empty?
	back_value = *(int *)ft_deque_back(deque);
	ft_deque_pop_back(deque);
	second_back_value = *(int *)ft_deque_back(deque);
	ft_deque_pop_back(deque);
	ft_deque_push_back(deque, &back_value);
	ft_deque_push_back(deque, &second_back_value);
}
