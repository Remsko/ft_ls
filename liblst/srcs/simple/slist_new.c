/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_new.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 19:43:01 by rpinoit           #+#    #+#             */
/*   Updated: 2018/06/19 19:46:39 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline t_slist		*slist_new(void *content)
{
	t_slist *new;
	
	if ((new = (t_slist *)malloc(sizeof(t_slist))) != NULL)
		slist_init(new, content);
	return (new);
}
