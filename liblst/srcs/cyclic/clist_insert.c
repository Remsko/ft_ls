/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clist_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:12:44 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 19:07:18 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	clist_insert(t_clist *new, t_clist *prev, t_clist *next)
{
	if (new != NULL)
	{
		if (next != NULL)
		{
			new->next = next;
			next->prev = new;
		}
		if (prev != NULL)
		{
			new->prev = prev;
			prev->next = new;
		}
	}
}
