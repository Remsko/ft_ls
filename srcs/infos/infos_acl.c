/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   infos_acl.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 20:32:44 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/10 20:57:28 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    infos_extended(char *path, char *ext)
{
    acl_t acl;

    if (listxattr(path, NULL, 0) > 0)
        *ext = '@';
    else if ((acl = acl_get_file(path, ACL_TYPE_EXTENDED)) != NULL)
    {
        *ext = '+'
        acl_free(acl);
    }
}