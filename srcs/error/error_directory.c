/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_directory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 22:32:51 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/25 22:39:57 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    error_directory(char *dir)
{
    ft_putstr("ls: cannot access");
    ft_putstr(dir);
    ft_putstr(": No such file or directory\n");
}