/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_operations.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 15:35:30 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 15:35:30 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_OPERATIONS_H
# define PS_OPERATIONS_H

# include "ps_operation_enum.h"

# include "functions/ps_operations_functions.h"

void	add_operation_back(t_operation operation, t_data *data);
void	add_operation_front(t_operation operation, t_data *data);
bool	ps_call_operation(t_operation operation, t_data *data);
char	*get_operation_name(t_operation operation);
void	ps_print_operations(t_data *data);

#endif
