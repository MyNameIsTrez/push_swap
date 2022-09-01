/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parse_argv.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 14:18:51 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 14:55:24 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "parse_argv/ps_private_parse_argv.h"

t_status	parse_argv(t_i32 argc, char **argv, t_data *data)
{
	t_i32	i;
	t_i32	n;

	data->a = ft_vector_new(sizeof(t_i32));
	i = 1;
	while (i < argc)
	{
		if (!ft_atoi_safe(argv[i], &n))
			return (ps_set_error(PS_NOT_INTEGER));
		ft_vector_push(&data->a, &n);
		i++;
	}
	return (OK);
}
