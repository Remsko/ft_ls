#include "liblst.h"

inline void slist_reverse(t_slist **slst)
{
	t_slist *rev;
	t_slist *tmp;

	if (slst != NULL)
	{
		rev = NULL;
		while (*slst != NULL)
		{
			tmp = *slst;
			*slst = (*slst)->next;
			slist_add_start(&rev, tmp);
		}
		*slst = rev;
	}
}
