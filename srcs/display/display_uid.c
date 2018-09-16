/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_uid.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 14:16:32 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 18:31:26 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_uid(long max, char *uid)
{
	long	tmp;

	ft_putstr(uid);
	if ((tmp = max - ft_strlen(uid)) > 0)
		while (tmp-- > 0)
			ft_putchar(' ');
	ft_putstr("  ");
}
