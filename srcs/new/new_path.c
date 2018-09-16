/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new_path.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 14:21:40 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 14:43:02 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*new_path(char *start, char *end)
{
	char	*new;
	char	*ret;
	int		slash;

	if (start == NULL)
		return (ft_strdup(end));
	slash = (start[0] == '/' && start[1] == '\0');
	if ((new = (char *)malloc(sizeof(char) * (ft_strlen(start)
						+ ft_strlen(end) + 2))) == NULL)
		error_malloc();
	ret = new;
	while (*start != '\0')
		*new++ = *start++;
	if (slash != 1)
		*new++ = '/';
	while (*end != '\0')
		*new++ = *end++;
	*new = '\0';
	return (ret);
}
