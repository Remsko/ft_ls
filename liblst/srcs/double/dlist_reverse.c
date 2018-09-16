/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 19:02:48 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 19:02:59 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	dlist_reverse(t_dlist **dlst)
{
	t_dlist *rev;
	t_dlist *tmp;

	if (dlst != NULL)
	{
		rev = NULL;
		while (*dlst != NULL)
		{
			tmp = *dlst;
			*dlst = (*dlst)->next;
			dlist_add_start(&rev, tmp);
		}
		*dlst = rev;
	}
}
