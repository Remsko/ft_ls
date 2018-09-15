/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_mode.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/13 17:46:28 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/13 17:47:50 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    display_mode(t_infos *infos, t_max *max, t_options *opt)
{
    (void)max;
    (void)opt;
    ft_putstr(infos->mode);
    ft_putstr(" ");
}