/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_private_undo.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/02 17:25:28 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/02 17:25:28 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_PRIVATE_UNDO_H
# define PS_PRIVATE_UNDO_H

typedef void	(*t_undo_operation_function)(t_data *data);

void	undo_operation_call(t_operation operation, t_data *data);

void	upa(t_data *data);
void	upb(t_data *data);
void	ura(t_data *data);
void	urb(t_data *data);
void	urr(t_data *data);
void	urra(t_data *data);
void	urrb(t_data *data);
void	urrr(t_data *data);
void	usa(t_data *data);
void	usb(t_data *data);
void	uss(t_data *data);

#endif
