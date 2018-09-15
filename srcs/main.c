/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 11:40:06 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int main(int ac, char **av)
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
	//:printf("%zu, %zu, %zu\n",sizeof(time_t), sizeof(unsigned long), sizeof(int));
	return (0);
}
