/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_link.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 13:39:34 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/17 13:27:17 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_link(t_buffer *buf, long max, long link)
{
	char	*arr;
	long	tmp;
	int		len;

	if ((arr = ft_itoa(link)) == NULL)
		error_malloc();
	len = ft_strlen(arr);
	tmp = max - (long)len;
	while (tmp-- > 0)
		buffer_loop(buf, " ", 1);
	buffer_loop(buf, arr, len);
	buffer_loop(buf, " ", 1);
	ft_memdel((void **)&arr);
}
