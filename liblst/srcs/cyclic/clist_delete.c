/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clist_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:22:54 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/17 16:39:12 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void    clist_delete(t_clist **head, void (*del)(void *))
{
	t_clist *tmp;
	t_clist *clst;

	clst = *head;
	if (head != NULL && del != NULL)
	{
		while (clst->next != *head)
		{
			tmp = clst->next;
			del(clst->content);
			free(clst);
			clst = tmp;
		}
		*head = NULL;
	}
}
