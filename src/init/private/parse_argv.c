/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_argv.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 14:18:51 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 15:39:03 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "parse_argv/ps_private_parse_argv.h"

t_status	parse_argv(size_t argc, char **argv, t_i32 **unnormalized_a)
{
	size_t	i;
	t_i32	n;

	i = argc - 1;
	while (i > 0)
	{
		if (!ft_atoi_safe(argv[i], &n))
			return (ps_set_error(PS_E_NOT_INTEGER));
		ft_vector_push(unnormalized_a, &n);
		i--;
	}
	return (OK);
}
