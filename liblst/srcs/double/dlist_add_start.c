/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_add_start.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:58:07 by rpinoit           #+#    #+#             */
/*   Updated: 2018/06/25 09:18:41 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	dlist_add_start(t_dlist **head, t_dlist *new)
{
	if (head != NULL && new != NULL)
        {
                new->next = *head;
                *head = new;
        }
}
