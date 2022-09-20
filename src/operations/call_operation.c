/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   call_operation.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 15:45:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 15:45:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/ps_private_operations.h"

bool	ps_call_operation(t_operation operation, t_data *data)
{
	static t_operation_function	operations[] = {
	[SA] = sa,
	[SB] = sb,
	[SS] = ss,
	[PA] = pa,
	[PB] = pb,
	[RA] = ra,
	[RB] = rb,
	[RR] = rr,
	[RRA] = rra,
	[RRB] = rrb,
	[RRR] = rrr,
	};

	return (operations[operation](data));
}
