/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_print_error.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 13:20:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/31 18:23:45 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "../ps_private_error.h"

void	ps_print_error(void)
{
	char*const	ps_error_messages[] = {
	[PS_DUPLICATE] = "An argument was a duplicate.",
	};

	ft_putendl("Error");
	ft_putendl(ps_error_messages[ps_get_error()]);
}
