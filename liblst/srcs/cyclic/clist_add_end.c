/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clist_add_end.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:18:52 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/17 16:53:31 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void clist_add_end(t_clist **head, t_clist *new)
{
	if (head != NULL && new != NULL)
		clist_insert(new, (*head)->prev, *head);
}
