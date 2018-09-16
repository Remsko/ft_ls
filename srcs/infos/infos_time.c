/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_time.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 22:11:46 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 18:26:53 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*infos_time(time_t t)
{
	char	*tmp;
	long	dif;
	time_t	now;

	now = time(NULL);
	tmp = ctime((const time_t *)&t);
	dif = (long)(now - t);
	if (dif > SEC_6_MONTHS || dif < 0)
		tmp[0] = '1';
	else
		tmp[0] = '0';
	return (ft_strdup(tmp));
}
