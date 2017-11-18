#include "libft.h"
#include "fillit.h"

void	ft_flstappend(f_list *header, f_list *feet)
{
	f_list	*ptr;

	if (!header)
		return ;
	ptr = header;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = feet;
}
