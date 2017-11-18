#include "libft.h"
#include "fillit.h"

f_list		*ft_flstnew(char *buffer)
{
	f_list	*new;

	new = (f_list*)malloc(sizeof(f_list));
	if (new)
		if (buffer)
		{
			new->piece = ft_str_to_tab(buffer);
		}
	if (!new->piece)
		return (NULL);
	new->next = NULL;
	return (new);
}
