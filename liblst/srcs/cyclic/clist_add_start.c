/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clist_add_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:17:25 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 19:06:34 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	clist_add_start(t_clist **head, t_clist *new)
{
	if (head != NULL && new != NULL)
	{
		if (*head != NULL)
		{
			new->prev = (*head)->prev;
			(*head)->prev = new;
			new->next = *head;
		}
		*head = new;
	}
}
