/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_print_all_errors.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 14:12:24 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/31 18:26:50 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/ps_private_error.h"
#include "private/print_all_errors/ps_private_print_all_errors.h"

void	ps_print_all_errors(void)
{
	if (ft_get_error() != FT_OK)
		ft_print_error();
	if (ps_get_error() != PS_OK)
		ps_print_error();
}
