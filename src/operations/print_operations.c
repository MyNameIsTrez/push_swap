/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   print_operations.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 18:16:39 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 18:16:39 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/print_operations/ps_private_print_operations.h"

void	ps_print_operations(t_data *data)
{
	size_t	i;

	i = 0;
	while (i < ft_deque_size(data->operations))
	{
		ft_putendl(get_operation_name(*(t_operation *)ft_deque_at(data->operations, i)));
		i++;
	}
}
