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
	[SA] = "sa",
	[SB] = "sb",
	[SS] = "ss",
	[PA] = "pa",
	[PB] = "pb",
	[RA] = "ra",
	[RB] = "rb",
	[RR] = "rr",
	[RRA] = "rra",
	[RRB] = "rrb",
	[RRR] = "rrr",
	};

	return (operations[operation]);
}
