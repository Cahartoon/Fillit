#include "libft.h"
#include "fillit.h"

f_list		*ft_flstset(f_list *header)
{
	f_list	*ptr;
	char	c;

	if (!header)
		return (NULL);
	ptr = header;
	c = 'A';
	while (ptr->next)
	{
		ptr->width = ft_strlen(ptr->piece[0]);
		ptr->height = ft_tablen(ptr->piece);
		ptr->letter = c++;
		ptr = ptr->next;
	}
	return (header);
}
