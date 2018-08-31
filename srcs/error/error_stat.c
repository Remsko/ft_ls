/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_stat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/26 19:07:35 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/31 14:14:07 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    error_stat(char *path)
{
    ft_putstr("ft_ls: ");
    ft_putstr(path);
    perror(" stat");
    exit(EXIT_FAILURE);
}