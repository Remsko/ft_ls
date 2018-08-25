/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:18:06 by rpinoit           #+#    #+#             */
/*   Updated: 2018/06/25 09:15:07 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	dlist_insert(t_dlist *new, t_dlist *prev, t_dlist *next)
{
	if (new != NULL)
	{
		new->prev = prev;
		new->next = next;
	}
	if (prev != NULL)
		prev->next = new;
	if (next != NULL)
		next->prev = new;
}
