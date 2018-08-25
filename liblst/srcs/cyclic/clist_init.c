/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clist_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:47:32 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/17 16:17:33 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

void    clist_init(t_clist *clst, void *content)
{
	clst->next = clst;
	clst->prev = clst;
	clst->content = content;
}
