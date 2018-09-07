/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:16:03 by rpinoit           #+#    #+#             */
/*   Updated: 2018/09/07 17:20:42 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int  target_cmp(t_target *front, t_target *back)
{
    return (ft_strcmp(front->name, back->name));
}

static t_slist *join_list(t_slist *front, t_slist *back)
{
    t_slist *ret;

    if (front == NULL)
        return (back);
    else if (back == NULL)
        return (front);
        /* dat line tho */
    if (ft_strcmp(((t_target *)front->content)->name, ((t_target *)back->content)->name) <= 0)
    {
        ret = front;
        ret->next = join_list(front->next, back);
    }
    else
    {
        ret = back;
        ret->next = join_list(front, back->next);
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

static void merge_sort(t_slist **head)
{
    t_slist *front;
    t_slist *back;

    front = *head;
    if (front == NULL || front->next == NULL)
        return ;
    split_list(front, &back);
    merge_sort(&front);
    merge_sort(&back);
    *head = join_list(front, back);
}

void    process_sort(t_slist **list, t_options *opt)
{
    (void)opt;
    merge_sort(list);
}