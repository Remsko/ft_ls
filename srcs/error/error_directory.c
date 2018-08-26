/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_directory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:32:51 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/26 19:08:40 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    error_directory(char *dir)
{
    ft_putstr("ft_ls: cannot access");
    ft_putstr(dir);
    ft_putstr(": No such file or directory\n");
}