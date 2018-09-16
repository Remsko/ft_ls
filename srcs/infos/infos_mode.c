/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_mode.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 16:07:27 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 18:25:27 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

char	*infos_mode(mode_t mode)
{
	char	*permi;

	if ((permi = malloc(sizeof(char) * 12)) == NULL)
		error_malloc();
	permi[0] = infos_type(mode);
	infos_permi_usr(mode, &permi[1]);
	infos_permi_grp(mode, &permi[4]);
	infos_permi_oth(mode, &permi[7]);
	permi[10] = ' ';
	permi[11] = '\0';
	return (permi);
}
