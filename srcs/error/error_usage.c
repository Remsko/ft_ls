/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_usage.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:43:30 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 14:38:22 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	error_usage(char c)
{
	ft_putstr("ft_ls: illegal option -- ");
	ft_putchar(c);
	ft_putstr("\nusage: ./ft_ls [-lRart] [file ...]\n");
	exit(EXIT_FAILURE);
}
