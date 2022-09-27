/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_operation_from_line.c                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/27 13:31:28 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/27 13:31:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_status	ps_get_operation_from_line(char *line, t_operation *operation)
{
	*operation = 0;
	while (*operation < OPERATION_COUNT)
	{
		if (ft_str_eq(get_operation_name(*operation), line))
			return (OK);
		(*operation)++;
	}
	return (ps_set_error(PS_E_UNKNOWN_OPERATION));
}
