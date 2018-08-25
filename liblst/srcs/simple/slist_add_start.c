/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_add_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 09:17:44 by rpinoit           #+#    #+#             */
/*   Updated: 2018/06/25 09:25:08 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	slist_add_start(t_slist **head, t_slist *new)
{
	if (head != NULL && new != NULL)
	{
		new->next = *head;
		*head = new;
	}
}
