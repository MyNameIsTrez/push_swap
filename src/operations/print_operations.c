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
	size_t	len;

	i = 0;
	len = ft_vector_get_size(data->operations);
	while (i < len)
	{
		ft_putendl(get_operation_name(data->operations[i]));
		i++;
	}
}
