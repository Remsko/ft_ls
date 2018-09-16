/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_uid.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 20:36:46 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 18:26:11 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*infos_uid(uid_t uid)
{
	struct passwd	*pwd;

	if ((pwd = getpwuid(uid)) == NULL)
		return (NULL);
	return (ft_strdup(pwd->pw_name));
}
