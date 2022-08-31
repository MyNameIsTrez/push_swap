/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_get_error.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/23 13:54:22 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/31 18:19:09 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "ps_private_error.h"

t_ps_error	ps_get_error(void)
{
	return (*ps_get_error_ptr());
}
