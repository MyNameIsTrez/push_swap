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

bool	ps_call_operation(t_operation operation, t_data *data);
void	ps_print_operations(t_data *data);

#endif
