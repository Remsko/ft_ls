/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_cleaner.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 12:11:36 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 15:41:41 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    utils_cleaner(void *content)
{
    t_target *ciao;

    ciao = (t_target *)content;
    ft_memdel((void **)&ciao->infos->mode);
    ft_memdel((void **)&ciao->infos->uid);
    ft_memdel((void **)&ciao->infos->gid);
    ft_memdel((void **)&ciao->infos->time);
    ft_memdel((void **)&ciao->infos);
    ft_memdel((void **)&ciao->name);
    ft_memdel((void **)&ciao->path);
    ft_memdel((void **)&ciao);
}
