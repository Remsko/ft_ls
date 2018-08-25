/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:23:13 by rpinoit           #+#    #+#             */
/*   Updated: 2018/06/25 09:20:33 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	dlist_delete(t_dlist **head, void (*del)(void *))
{
	t_dlist *tmp;

	if (head != NULL && del != NULL)
	{
		while (*head)
		{
			tmp = (*head)->next;
			del((*head)->content);
			free(*head);
			*head = tmp;
		}
		*head = NULL;
	}
}
