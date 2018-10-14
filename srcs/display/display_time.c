/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_time.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:40:48 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:40:33 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

inline static void	display_day(t_buffer *buf, char *time)
{
	buffer_loop(buf, time + 4, 7);
}

inline static void	display_hours(t_buffer *buf, char *time)
{
	buffer_loop(buf, time + 11, 5);
}

inline static void	display_year(t_buffer *buf, char *time)
{
	buffer_loop(buf, time + 19, 5);
}

void				display_time(t_buffer *buf, char *time)
{
	display_day(buf, time);
	if (time[0] == '0')
		display_hours(buf, time);
	else
		display_year(buf, time);
	buffer_loop(buf, " ", 1);
}
