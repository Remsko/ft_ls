/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_time.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:40:48 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 18:39:48 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void	display_day(char *time)
{
	write(1, time + 4, 7);
}

static void	display_hours(char *time)
{
	write(1, time + 11, 5);
}

static void	display_year(char *time)
{
	write(1, time + 19, 5);
}

void		display_time(char *time, t_options *opt)
{
	(void)opt;
	display_day(time);
	if (time[0] == '0')
		display_hours(time);
	else
		display_year(time);
	ft_putstr(" ");
}
