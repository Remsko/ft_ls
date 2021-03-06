/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_options.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 20:02:17 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/08 13:19:36 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	parsing_options(t_options *opt, char *av)
{
	const char	*flags;
	char		*tmp;

	flags = "lRartAdgopfSc";
	while (*(++av) != '\0')
	{
		if ((tmp = ft_strchr(flags, *av)) == NULL)
			error_usage(*av);
		opt->flags |= 1 << (tmp - flags);
	}
}
