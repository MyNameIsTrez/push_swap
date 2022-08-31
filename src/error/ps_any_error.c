/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_any_error.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 13:45:03 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/31 18:25:29 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/ps_private_error.h"

t_status	ps_any_error(void)
{
	if (ft_any_error() != OK)
		return (ERROR);
	if (ps_get_error() != PS_OK)
		return (ERROR);
	return (OK);
}
