/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   bruteforce_bfs.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 18:00:51 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 18:00:51 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "undo/ps_private_undo.h"

void	bruteforce_bfs(t_data *data)
{
	size_t		depth;
	t_operation	operation;
	bool		operated;

	depth = 0;
	operation = 0;
	while (operation < OPERATION_COUNT)
	{
		operated = ps_call_operation(operation, data);
		if (ps_is_sorted(data))
			return ;
		if (operated)
			undo_operation_call(operation, data);
		// BFS
		// if (depth < BRUTEFORCE_MAX_DEPTH)
		operation++;
	}
}
