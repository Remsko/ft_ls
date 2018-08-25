/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:05:08 by rpinoit           #+#    #+#             */
/*   Updated: 2018/06/19 18:56:51 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	dlist_init(t_dlist *dlst, void *content)
{
	if (dlst != NULL)
	{
		dlst->prev = NULL;
		dlst->next = NULL;
	}
	dlst->content = content;
}
