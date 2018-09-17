/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_mode.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:46:28 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 13:27:46 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_mode(t_buffer *buf, char *mode)
{
	buffer_loop(buf, mode, ft_strlen(mode));
	buffer_loop(buf, " ", 1);
}
