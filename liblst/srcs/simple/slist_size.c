/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_size.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:30:24 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/06 17:31:52 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline int slist_size(t_slist *list)
{
    int size;

    size = 0;
    while (list != NULL)
    {
        ++size;
        list = list->next;
    }
    return (size);
}