/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_insert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 09:10:39 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/17 16:37:58 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	slist_insert(t_slist *new, t_slist *prev, t_slist *next)
{
	if (new != NULL)
		new->next = next;
	if (prev != NULL)
		prev->next = new;
}
