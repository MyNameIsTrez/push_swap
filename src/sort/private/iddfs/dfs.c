/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   dfs.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/21 14:37:03 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/21 14:37:03 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "undo/ps_private_undo.h"

bool	dfs(size_t depth, size_t max_depth, t_data *data)
{
	t_operation	operation;
	bool		operated;

	operation = 0;
	while (operation < OPERATION_COUNT)
	{
		operated = ps_call_operation(operation, data);
		if (ps_is_sorted(data)
			|| (depth + 1 < max_depth && dfs(depth + 1, max_depth, data)))
		{
			add_operation_front(operation, data);
			return (true);
		}
		if (operated)
			undo_operation_call(operation, data);
		operation++;
	}
	return (false);
}
