/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/25 21:43:03 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int main(int ac, char **av)
{
	t_options	opt;

	ft_bzero(&opt, sizeof(t_options));
	if (ac > 1)
	{
		if (parsing_arg(&opt, av) == FALSE)
		{
			error_usage(opt.error);
			return (1);
		}
	}
	process_filling();
	display_list();

	printf("option l = %d\n", ((opt.flags & 1) > 0));
	printf("option R = %d\n", ((opt.flags & (1 << 1)) > 0));
	printf("option a = %d\n", ((opt.flags & (1 << 2)) > 0));
	printf("option r = %d\n", ((opt.flags & (1 << 3)) > 0));
	printf("option t = %d\n", ((opt.flags & (1 << 4)) > 0));

	return (0);
}
