/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_error.h                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/03/22 16:15:18 by sbos          #+#    #+#                 */
/*   Updated: 2022/08/31 18:16:54 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_ERROR_H
# define PS_ERROR_H

# include "ps_error_enum.h"

t_status	ps_any_error(void);
void		ps_print_all_errors(void);
t_status	ps_set_error(t_ps_error ps_error);

#endif
