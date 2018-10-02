/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_check_dotdir.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/02 10:18:18 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/02 10:21:33 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

inline t_bool	utils_check_dotdir(char *name)
{
	static const char point = '.';
	static const char zero = '\0';

	if (name[0] == point && (name[1] == zero
				|| (name[1] == point && name[2] == zero)))
		return (TRUE);
	return (FALSE);
}
