/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:16:03 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/11 14:01:56 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static int      ft_cmp(t_target *front, t_target *back, t_options *opt)
{
    if (opt->flags & FLAG_t)
    {
        if (front->stat.st_mtime < back->stat.st_mtime)
            return (-1);
        else if (front->stat.st_mtime > back->stat.st_mtime)
            return (1);
        else
            ;
    }
    return (ft_strcmp(front->name, back->name));
}

static t_slist *join_list(t_slist *front, t_slist *back, t_options *opt)
{
    t_slist *ret;

    if (front == NULL)
        return (back);
    else if (back == NULL)
        return (front);
    if (ft_cmp((t_target *)front->content, (t_target *)back->content, opt) <= 0)
    {
        ret = front;
        ret->next = join_list(front->next, back, opt);
    }
    else
    {
        ret = back;
        ret->next = join_list(front, back->next, opt);
    }
    return (ret);
}

static void split_list(t_slist *head, t_slist **back)
{
    t_slist *tmp;
    t_slist *middle;

    tmp = head->next;
    middle = head;
    while (tmp != NULL)
    {
        tmp = tmp->next;
        if (tmp != NULL)
        {
            tmp = tmp->next;
            middle = middle->next;
        }
    }
    *back = middle->next;
    middle->next = NULL;
}

static void merge_sort(t_slist **head, t_options *opt)
{
    t_slist *front;
    t_slist *back;

    front = *head;
    if (front == NULL || front->next == NULL)
        return ;
    split_list(front, &back);
    merge_sort(&front, opt);
    merge_sort(&back, opt);
    *head = join_list(front, back, opt);
}

void    process_sort(t_slist **list, t_options *opt)
{
    (void)opt;
    merge_sort(list, opt);
}