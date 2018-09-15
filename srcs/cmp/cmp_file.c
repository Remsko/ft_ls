/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_file.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 10:48:18 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 10:49:55 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int     cmp_file(void *front, void *back)
{
    t_target *target1;
    t_target *target2;

    target1 = (t_target *)front;
    target2 = (t_target *)back;
    return (ft_strcmp(target1->name, target2->name));
}