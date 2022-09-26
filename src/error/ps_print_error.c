/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_print_error.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 14:12:24 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/31 18:26:50 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/ps_private_error.h"

void	ps_print_error(void)
{
	if (ft_get_error() != FT_OK || ps_get_error() != PS_OK)
		ft_putendl_fd("Error", STDERR_FILENO);
}
