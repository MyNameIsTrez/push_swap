/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_and_execute.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:09:40 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:09:40 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	add_and_execute(t_operation operation, t_data *data)
{
	add_operation_back(operation, data);
	return (ps_call_operation(operation, data));
}
