/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_max_operation_count.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/21 19:16:32 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/21 19:16:32 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	get_max_operation_count(t_data *data)
{
	size_t	highest_number;
	size_t	bit_count_highest;
	size_t	total_bit_count;

	highest_number = ft_deque_size(data->a) - 1;
	bit_count_highest = 0;
	while (highest_number >> bit_count_highest != 0)
		bit_count_highest++;
	total_bit_count = ft_deque_size(data->a) * bit_count_highest;
	return (total_bit_count * 2);
}

/*

For radix sort:

For every 0 bit, 2 operations
For every 1 bit, 1 operation
So, max 2 operations per bit

Repeat this for every digit

number_count * bit_count_highest = total_bit_count
max_operation_count == total_bit_count * 2

The brute forcer can *always* do it in this number of operations or less.

It *is* possible to use more operations with a worse sorting algorithm,
but since you can always make it take nearly infinite operations we don't care.

*/
