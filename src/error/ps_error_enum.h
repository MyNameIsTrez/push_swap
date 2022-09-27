/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_error_enum.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/31 18:16:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 14:51:27 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_ERROR_ENUM_H
# define PS_ERROR_ENUM_H

typedef enum e_ps_error
{
	PS_OK,
	PS_E_DUPLICATE,
	PS_E_NOT_INTEGER,
	PS_E_UNKNOWN_OPERATION,
	PS_ERROR_COUNT,
}	t_ps_error;

#endif
