/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_operation_front.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/21 18:03:17 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/21 18:03:17 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	add_operation_front(t_operation operation, t_data *data)
{
	ft_deque_push_front(data->operations, &operation);
}
