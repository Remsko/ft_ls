/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_sweeper.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/16 11:58:46 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 12:14:34 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    utils_sweeper(void *content)
{
    t_directory *byebye;

    byebye = (t_directory *)content;
    slist_delete(&byebye->list, utils_cleaner);
    ft_memdel((void **)&byebye->path);
    ft_memdel((void **)&byebye);
}