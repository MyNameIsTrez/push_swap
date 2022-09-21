/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_struct_data.h                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/31 18:07:57 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 14:46:46 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_STRUCT_DATA_H
# define PS_STRUCT_DATA_H

typedef struct s_deque		t_deque;
typedef enum e_operation	t_operation;

typedef struct s_data
{
	t_deque	*a;
	t_deque	*b;
	t_deque	*operations;
}	t_data;

#endif
