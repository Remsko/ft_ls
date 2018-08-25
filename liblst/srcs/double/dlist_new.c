/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 18:52:08 by rpinoit           #+#    #+#             */
/*   Updated: 2018/06/19 19:45:47 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline t_dlist	*dlist_new(void *content)
{
	t_dlist *new;

	if ((new = (t_dlist *)malloc(sizeof(t_dlist))) != NULL)
		dlist_init(new, content);
	return (new);
}
