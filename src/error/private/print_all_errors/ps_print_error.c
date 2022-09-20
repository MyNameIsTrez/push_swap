/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_print_error.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/06 13:20:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 14:51:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "../ps_private_error.h"

// The example is stupid and doesn't expect this:
// char*const	ps_error_messages[] = {
// [PS_E_NOT_INTEGER] = "Non-integer argument.",
// [PS_E_DUPLICATE] = "Duplicate argument.",
// };
// ft_putendl_fd(ps_error_messages[ps_get_error()], STDERR_FILENO);
void	ps_print_error(void)
{
	ft_putendl_fd("Error", STDERR_FILENO);
}
