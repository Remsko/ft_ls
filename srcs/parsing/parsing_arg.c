/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_arg.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 19:46:20 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/15 19:12:48 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void    sort_args(char **argv)
{
    char	*tmp;
	int		find;
	int		i;

	find = 1;
	while (find)
	{
		find = 0;
		i = 0;
		while (argv[i + 1] != NULL)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				find = 1;
			}
            ++i;
		}
	}
}

void    parsing_arg(t_options *opt, char ***av_ptr)
{
    char **av;

    av = *av_ptr;
    while (*av != NULL)
    {
        if (**av != '-' || *(*av + 1) == '\0')
            break;
        else if (*(*av + 1) == '-')
        {
            if (*(*av + 2) == '\0')
            {
                ++av;
                break;
            }
            error_usage('-');
        }
        parsing_options(opt, *av);
        ++av;
    }
    sort_args(*av_ptr);
    *av_ptr = av;
}