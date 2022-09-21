/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iddfs.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/21 14:36:00 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/21 14:36:00 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "iddfs/ps_private_iddfs.h"

void	iddfs(t_data *data)
{
	size_t	max_depth;

	max_depth = 1;
	while (!dfs(0, max_depth, data))
		max_depth++;
}
