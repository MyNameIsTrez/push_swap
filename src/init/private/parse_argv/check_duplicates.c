/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   check_duplicates.c                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 17:32:09 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 17:32:09 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

bool	has_duplicate(t_i32 *array, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len - 1)
	{
		if (array[i] == array[i + 1])
			return (true);
		i++;
	}
	return (false);
}
