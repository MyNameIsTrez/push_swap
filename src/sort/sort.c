/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 18:00:51 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 18:00:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/ps_private_sort.h"

void	ps_sort(t_data *data)
{
	if (ft_deque_size(data->a) <= BRUTEFORCE_NUMBER_COUNT_LIMIT)
		iddfs(data);
	else
		radix(data);
}
