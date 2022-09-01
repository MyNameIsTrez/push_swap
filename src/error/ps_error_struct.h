/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_error_struct.h                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/08/31 18:16:27 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 14:51:27 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_ERROR_STRUCT_H
# define PS_ERROR_STRUCT_H

typedef enum e_ps_error
{
	PS_OK,
	PS_DUPLICATE,
	PS_NOT_INTEGER,
	PS_ERROR_COUNT,
}	t_ps_error;

#endif
