/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_operation_name.c                               :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 15:45:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 15:45:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*get_operation_name(t_operation operation)
{
	static char	*operations[] = {
	[sa] = "sa",
	[sb] = "sb",
	[ss] = "ss",
	[pa] = "pa",
	[pb] = "pb",
	[ra] = "ra",
	[rb] = "rb",
	[rr] = "rr",
	[rra] = "rra",
	[rrb] = "rrb",
	[rrr] = "rrr",
	};

	return (operations[operation]);
}
