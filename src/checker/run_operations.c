/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_operations.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/27 13:31:28 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/27 13:31:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/ps_private_checker.h"

t_status	ps_run_operations(t_data *data)
{
	char		*line;
	t_operation	operation;

	while (true)
	{
		line = get_next_line_without_newline(STDIN_FILENO);
		if (line == NULL)
			break ;
		if (ps_get_operation_from_line(line, &operation) != OK)
			return (ERROR);
		ps_call_operation(operation, data);
	}
	if (ps_any_error())
		return (ERROR);
	return (OK);
}
