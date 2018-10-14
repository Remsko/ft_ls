/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:46:20 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/14 11:00:28 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	sort_args(char **argv)
{
	char	*tmp;
	int		i;

	if (argv != NULL && *argv != NULL)
	{
		i = 0;
		while (argv[i + 1] != NULL)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				i = 0;
			}
			else
				++i;
		}
	}
}

void	indirect_opt(t_options *opt)
{
	if (opt->flags & FLAG_g || opt->flags & FLAG_o)
		opt->flags |= FLAG_l;
	if (opt->flags & FLAG_f)
		opt->flags |= FLAG_a;
}

void	parsing_arg(t_options *opt, char ***av_ptr)
{
	char **av;

	av = *av_ptr;
	while (*av != NULL)
	{
		if (**av != '-' || *(*av + 1) == '\0')
			break ;
		else if (*(*av + 1) == '-')
		{
			if (*(*av + 2) == '\0')
			{
				++av;
				break ;
			}
			error_usage('-');
		}
		parsing_options(opt, *av);
		++av;
	}
	indirect_opt(opt);
	if ((opt->flags & FLAG_f) == 0)
		sort_args(av);
	*av_ptr = av;
}
