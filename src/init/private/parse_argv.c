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

t_status	parse_argv(size_t argc, char **argv, t_data *data)
{
	size_t	i;
	t_i32	n;

	data->a = ft_vector_new(sizeof(t_i32));
	if (data->a == NULL)
		return (ERROR);
	i = 1;
	while (i < argc)
	{
		if (!ft_atoi_safe(argv[i], &n))
			return (ps_set_error(PS_NOT_INTEGER));
		if (ft_vector_push(&data->a, &n) != OK)
			return (ERROR);
		i++;
	}
	return (OK);
}
