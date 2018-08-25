/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   slist_init.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/29 14:54:35 by marvin            #+#    #+#             */
/*   Updated: 2018/07/29 14:54:35 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblst.h"

inline void	slist_init(t_slist *lst, void *content)
{
	if (lst != NULL)
		lst->next = NULL;
	lst->content = content;
}
