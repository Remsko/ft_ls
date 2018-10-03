/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 16:16:03 by rpinoit           #+#    #+#             */
/*   Updated: 2018/10/02 18:01:04 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

static t_slist	*join_list(t_slist *front, t_slist *back,
		int ft_cmp(void *, void *))
{
	t_slist	*ret;

	if (front == NULL)
		return (back);
	else if (back == NULL)
		return (front);
	if (ft_cmp(front->content, back->content) <= 0)
	{
		ret = front;
		ret->next = join_list(front->next, back, ft_cmp);
	}
	else
	{
		ret = back;
		ret->next = join_list(front, back->next, ft_cmp);
	}
	return (ret);
}

static void		split_list(t_slist *head, t_slist **back)
{
	t_slist	*tmp;
	t_slist	*middle;

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

static void		merge_sort(t_slist **head, int ft_cmp(void *, void *))
{
	t_slist	*front;
	t_slist	*back;

	front = *head;
	if (front == NULL || front->next == NULL)
		return ;
	split_list(front, &back);
	merge_sort(&front, ft_cmp);
	merge_sort(&back, ft_cmp);
	*head = join_list(front, back, ft_cmp);
}

void			process_sort(t_slist **list, t_options *opt, t_bool isdir)
{
	if (opt->flags & FLAG_f)
		return ;
	if (isdir == TRUE)
	{
		if (opt->flags & FLAG_t)
			merge_sort(list, cmp_dir_time);
		else
			merge_sort(list, cmp_dir);
	}
	else
	{
		if (opt->flags & FLAG_t)
			merge_sort(list, cmp_file_time);
		else
			merge_sort(list, cmp_file);
	}
	if (opt->flags & FLAG_r)
		slist_reverse(list);
}
