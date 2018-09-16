/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_link.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 13:39:34 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 18:29:27 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_link(long max, long link)
{
	long	tmp;

	tmp = max - ft_intlen(link);
	while (tmp-- > 0)
		ft_putchar(' ');
	ft_putnbr((int)link);
	ft_putstr(" ");
}
