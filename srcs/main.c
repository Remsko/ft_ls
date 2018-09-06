/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/06 16:15:24 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int main(int ac, char **av)
{
	t_slist		*list;
	t_options	opt;
	
	list = NULL;
	opt.flags = 0;
	if (ac > 1)
		parsing_arg(&opt, &av);
	process_filling(&list, av);
	display_list(list, 0);

	/*
	printf("option l = %d\n", ((opt.flags & 1) > 0));
	printf("option R = %d\n", ((opt.flags & (1 << 1)) > 0));
	printf("option a = %d\n", ((opt.flags & (1 << 2)) > 0));
	printf("option r = %d\n", ((opt.flags & (1 << 3)) > 0));
	printf("option t = %d\n", ((opt.flags & (1 << 4)) > 0));
	*/
	return (0);
}
