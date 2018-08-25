#include "liblst.h"

inline void dlist_reverse(t_dlist **dlst)
{
	t_dlist *rev;
	t_dlist *tmp;

	if (dlst != NULL)
	{
		rev = NULL;
		while (*dlst != NULL)
		{
			tmp = *dlst;
			*dlst = (*dlst)->next;
			dlist_add_start(&rev, tmp);
		}
		*dlst = rev;
	}
}
