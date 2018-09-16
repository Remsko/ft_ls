/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/16 15:50:14 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int ac, char **av)
{
	t_slist		*directories;
	t_options	opt;

	directories = NULL;
	opt.flags = 0;
	opt.utils = 0;
	++av;
	if (ac > 1)
		parsing_arg(&opt, &av);
	process_filling(&directories, &opt, av);
	display_directories(directories, &opt);
	return (0);
}
