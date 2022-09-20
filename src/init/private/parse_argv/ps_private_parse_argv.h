/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ps_private_parse_argv.h                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: sbos <sbos@student.codam.nl>                 +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/01 14:28:02 by sbos          #+#    #+#                 */
/*   Updated: 2022/09/01 14:33:17 by sbos          ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PS_PRIVATE_PARSE_ARGV_H
# define PS_PRIVATE_PARSE_ARGV_H

bool	has_duplicate(t_i32 *array, size_t len);
t_u32	find_index(t_i32 *array, t_i32 value);

#endif
