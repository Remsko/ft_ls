/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 13:28:19 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/20 18:47:40 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		main(int ac, char **av)
{
	t_options opt;

	if (ac > 1)
	{
		parser_entry(++av, &opt);
	}
	else
		process_entry(&opt);
	printf("option l = %u\n", opt.l);
	printf("option R = %u\n", opt.R);
	printf("option a = %u\n", opt.a);
	printf("option r = %u\n", opt.r);
	printf("option t = %u\n", opt.t);
	return (0);
}
