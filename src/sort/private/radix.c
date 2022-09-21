/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   radix.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/21 16:01:05 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/21 16:01:05 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "add_and_execute_operations/ps_private_add_and_execute_operations.h"

void	push_b_to_a(t_data *data)
{
	while (ft_deque_size(data->b) > 0)
		add_and_execute(PA, data);
}

void	push_zeros_from_a_to_b(size_t digit_index, t_data *data)
{
	size_t	count;

	count = ft_deque_size(data->a);
	while (count > 0)
	{
		if (((*(t_u32 *)ft_deque_back(data->a) >> digit_index) & 1) == 0)
			add_and_execute(PB, data);
		else
			add_and_execute(RA, data);
		count--;
	}
}

void	radix(t_data *data)
{
	size_t	digit_index;

	digit_index = 0;
	while (!ps_is_sorted(data))
	{
		push_zeros_from_a_to_b(digit_index, data);
		push_b_to_a(data);
		digit_index++;
	}
}

/*

1
0
2

01
00
10

*/
/*
Moving 0s to B

A    B
0[1] 1[0]
     0[0]

00
10
01

A    B
[1]0 [0]1
     [0]0

00
01
10

*/
/*
THIS GIVES THE WRONG RESULT
Moving 1s to B

A    B
1[0] 0[1]
0[0]

01
10
00

A    B
[0]0 [1]0
[0]1

10
00
01

*/



/*

2
1
3

10
01
11

*/
/*
Moving 0s to B

A    B
0[1] 1[0]
1[1]

10
01
11

A    B
[1]0 [0]1
[1]1

01
10
11

*/
/*
THIS GIVES THE WRONG RESULT
Moving 1s to B

A    B
1[0] 1[1]
     0[1]

01
11
10

A    B
[0]1 [1]1
     [1]0

10
11
01

*/
