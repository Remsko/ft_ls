/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_delete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 09:19:09 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 19:01:41 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	slist_delete(t_slist **head, void (*del)(void *))
{
	t_slist	*tmp;

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
