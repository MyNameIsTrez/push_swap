/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/31 17:57:36 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/31 18:27:44 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(t_i32 argc, char **argv)
{
	t_data	data;

	if (ps_init(argc, argv, &data) != OK)
	{
		ps_print_all_errors();
		return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
