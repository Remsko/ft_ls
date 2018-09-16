/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_reverse.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 19:01:54 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 19:02:06 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	slist_reverse(t_slist **slst)
{
	t_slist	*rev;
	t_slist	*tmp;

	if (slst != NULL)
	{
		rev = NULL;
		while (*slst != NULL)
		{
			tmp = *slst;
			*slst = (*slst)->next;
			slist_add_start(&rev, tmp);
		}
		*slst = rev;
	}
}
