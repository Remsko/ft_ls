/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_add_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:00:44 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/17 16:45:41 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	dlist_add_end(t_dlist **head, t_dlist *new)
{
	t_dlist *end;

	if (head != NULL && new != NULL)
	{
		end = *head;
		if (end != NULL)
		{
			while (end->next != NULL)
				end = end->next;
			end->next = new;
		}
		else
			*head = new;
	}
}
