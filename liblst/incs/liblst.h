/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblst.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpinoit <rpinoit@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:50:44 by rpinoit           #+#    #+#             */
/*   Updated: 2018/08/17 16:41:40 by rpinoit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLST_H
# define LIBLST_H

#include <stdlib.h>

typedef struct	s_clist
{
	struct s_clist  *next;
	struct s_clist  *prev;
	void    *content;
}				t_clist;

typedef struct	s_dlist
{
	struct s_dlist	*next;
	struct s_dlist	*prev;
	void	*content;
}				t_dlist;

typedef struct	s_slist
{
	struct s_slist *next;
	void *content;
}				t_slist;

/*
 ** cyclic
 */

t_clist	*clist_new(void *content);
void    clist_init(t_clist *clst, void *content);
void	clist_insert(t_clist *new, t_clist *prev, t_clist *next);
void	clist_add_start(t_clist **head, t_clist *new);
void	clist_add_end(t_clist **head, t_clist *new);
void    clist_delete(t_clist **head, void (*del)(void *));

/* 
 ** double
 */

t_dlist	*dlist_new(void *content);
void	dlist_init(t_dlist *dlst, void *content);
void	dlist_insert(t_dlist *new, t_dlist *prev, t_dlist *next);
void	dlist_add_start(t_dlist **head, t_dlist *new);
void	dlist_add_end(t_dlist **head, t_dlist *new);
void	dlist_delete(t_dlist **head, void (*del)(void *));
void	dlist_reverse(t_dlist **dlst);

/*
 ** simple
 */

t_slist	*slist_new(void *content);
void	slist_init(t_slist *slst, void *content);
void	slist_insert(t_slist *new, t_slist *prev, t_slist *next);
void	slist_add_start(t_slist **head, t_slist *new);
void	slist_add_end(t_slist **head, t_slist *new);
void	slist_delete(t_slist **head, void (*del)(void *));
void	slist_reverse(t_slist **slst);

#endif
