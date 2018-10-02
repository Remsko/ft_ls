/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_check_begindot.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:17:48 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/02 10:24:12 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

inline t_bool   utils_check_begindot(char *name, t_options *opt)
{
	if (name[0] != '.' || opt->flags & FLAG_a)
		return (TRUE);
	else if (opt->flags & FLAG_A && utils_check_dotdir(name) == FALSE)
		return (TRUE);
	return (FALSE);
}
