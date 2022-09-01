/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   init.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/31 18:12:26 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 15:33:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "private/ps_private_init.h"

t_status	ps_init(size_t argc, char **argv, t_data *data)
{
	ft_bzero(data, sizeof(t_data));
	if (parse_argv(argc, argv, data) != OK)
		return (ERROR);
	if (normalize(data) != OK)
		return (ERROR);
	return (OK);
}
