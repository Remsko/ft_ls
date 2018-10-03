/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/02 14:49:57 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int ac, char **av)
{
	t_slist		*directories;
	t_buffer	buf;
	t_options	opt;

	buffer_clear(&buf);
	ft_bzero((void *)&opt, (sizeof(t_options)));
	directories = NULL;
	++av;
	if (ac > 1)
		parsing_arg(&opt, &av);
	process_filling(&directories, &buf, &opt, av);
	display_directories(directories, &buf, &opt);
	buffer_print(&buf);
	return (0);
}
