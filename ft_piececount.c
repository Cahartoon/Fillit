#include "libft.h"
#include "fillit.h"

int		ft_piececount(f_list *liste)
{
	int		count;

	count = 0;
	while (liste->next)
	{
		count++;
		liste = liste->next;
	}
	return (count);
}
