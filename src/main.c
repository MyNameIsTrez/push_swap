/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.c                                             :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/31 17:57:36 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 15:05:53 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(t_i32 argc, char **argv)
{
	t_data	data;

	if (argc <= 1)
		return (EXIT_SUCCESS);
	if (ps_init((size_t)argc, argv, &data) != OK)
	{
		ps_print_all_errors();
		ft_free_allocations();
		return (EXIT_FAILURE);
	}
	if (!ps_is_sorted(&data))
		ps_run(&data);
	ft_free_allocations();
	return (EXIT_SUCCESS);
}
