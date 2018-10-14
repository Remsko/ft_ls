/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_total.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:29:02 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 10:31:41 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	display_total(t_buffer *buf, int total)
{
	char	*arr;
	int		len;

	if ((arr = ft_itoa(total)) == NULL)
		error_malloc();
	len = ft_strlen(arr);
	buffer_loop(buf, "total ", 6);
	buffer_loop(buf, arr, len);
	buffer_loop(buf, "\n", 1);
	ft_memdel((void **)&arr);
}
