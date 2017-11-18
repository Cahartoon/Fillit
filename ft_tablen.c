#include "libft.h"
#include "fillit.h"

int		ft_tablen(char **tab)
{
	int		i;

	if (!tab)
		return (0);
	i = 0;
	while (tab[i])
		i++;
	return (i);
}
