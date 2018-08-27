/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/27 13:36:50 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int main(int ac, char **av)
{
	t_slist		*list;
	t_options	opt;

		t_infos *infos;
	list = NULL;
	ft_bzero(&opt, sizeof(t_options));
	if (ac > 1)
	{
		if (parsing_arg(&opt, av) == FALSE)
		{
			error_usage(opt.error);
			return (1);
		}
		//infos = new_infos(av[1]);
		//printf("%s %lu %s %s %lu %s %s\n", infos->mode, infos->link, infos->uid, infos->gid, infos->size, infos->time, av[1]);
	}
	process_filling(&list, &opt);
	display_list();

	printf("option l = %d\n", ((opt.flags & 1) > 0));
	printf("option R = %d\n", ((opt.flags & (1 << 1)) > 0));
	printf("option a = %d\n", ((opt.flags & (1 << 2)) > 0));
	printf("option r = %d\n", ((opt.flags & (1 << 3)) > 0));
	printf("option t = %d\n", ((opt.flags & (1 << 4)) > 0));

	return (0);
}
