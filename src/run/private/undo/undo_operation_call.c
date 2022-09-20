/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   undo_operation_call.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 15:45:48 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 15:45:48 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "ps_private_undo.h"

void	undo_operation_call(t_operation operation, t_data *data)
{
	static t_undo_operation_function	operations[] = {
	[SA] = usa,
	[SB] = usb,
	[SS] = uss,
	[PA] = upa,
	[PB] = upb,
	[RA] = ura,
	[RB] = urb,
	[RR] = urr,
	[RRA] = urra,
	[RRB] = urrb,
	[RRR] = urrr,
	};

	operations[operation](data);
}
