/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clist_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 16:17:43 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 19:07:29 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline t_clist	*clist_new(void *content)
{
	t_clist *new;

	if ((new = (t_clist*)malloc(sizeof(t_clist))) != NULL)
		clist_init(new, content);
	return (new);
}
