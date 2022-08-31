/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_set_error.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/23 13:50:42 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/31 18:27:12 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/ps_private_error.h"

t_status	ps_set_error(t_ps_error ps_error)
{
	*ps_get_error_ptr() = ps_error;
	return (ERROR);
}
