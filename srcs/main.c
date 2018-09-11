/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/11 14:06:45 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int main(int ac, char **av)
{
	t_slist		*list;
	t_options	opt;
	
	list = NULL;
	opt.flags = 0;
	opt.utils = 0;
	++av;
	if (ac > 1)
		parsing_arg(&opt, &av);
	process_filling(&list, &opt, av);
	process_sort(&list, &opt);
	/*
	while (list != NULL)
	{
		printf("%s\n", ((t_target *)list->content)->name);
		list = list->next;
	}*/
	display_list(list, &opt);
	//printf("ARGS \n\n");
	//while (*av)
	//	printf("%s\n", *av++);
	/*
	printf("option l = %d\n", ((opt.flags & 1) > 0));
	printf("option R = %d\n", ((opt.flags & (1 << 1)) > 0));
	printf("option a = %d\n", ((opt.flags & (1 << 2)) > 0));
	printf("option r = %d\n", ((opt.flags & (1 << 3)) > 0));
	printf("option t = %d\n", ((opt.flags & (1 << 4)) > 0));
	printf("utils no_R = %d\n", ((opt.utils & (1)) > 0));
	printf("utils path = %d\n", ((opt.utils & (1 << 1)) > 0));
	*/
	return (0);
}
