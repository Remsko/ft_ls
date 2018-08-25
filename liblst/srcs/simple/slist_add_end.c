/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_add_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 09:14:20 by rpinoit           #+#    #+#             */
/*   Updated: 2018/06/25 09:25:37 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	slist_add_end(t_slist **head, t_slist *new)
{
	t_slist *end;

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
