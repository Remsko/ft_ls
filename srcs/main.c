/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/22 12:49:02 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static void usage(char c)
{
	ft_putstr("ft_ls: illegal option -- ");
	ft_putchar(c);
	ft_putchar('\n');
	ft_putstr("usage: ./ft_ls [-lRart] [file ...]\n");
}

int main(int ac, char **av)
{
	t_options opt;

	ft_bzero(&opt, sizeof(t_options));
	if (ac > 1)
	{
		if (parser(++av, &opt) == FALSE)
		{
			usage(opt.error);
			return (1);
		}
	}
	else
		process_entry(&opt);
	printf("option l = %d\n", ((opt.flags & 1) > 0));
	printf("option R = %d\n", ((opt.flags & (1 << 1)) > 0));
	printf("option a = %d\n", ((opt.flags & (1 << 2)) > 0));
	printf("option r = %d\n", ((opt.flags & (1 << 3)) > 0));
	printf("option t = %d\n", ((opt.flags & (1 << 4)) > 0));
	return (0);
}
