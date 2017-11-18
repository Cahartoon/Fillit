#include "libft.h"
#include "fillit.h"

int		ft_validpattern(char *buffer)
{
	int		i;
	int		nb;
	int		duo;

	i = 0;
	nb = 0;
	duo = 0;
	while (buffer[i])
	{
		if (buffer[i] == '#')
		{
			if (ft_validconnect(buffer, i) >= 1)
				nb++;
			if (ft_validconnect(buffer, i) == 2)
				duo++;
			if (ft_validconnect(buffer, i) == 3)
				return (1);
		}
		i++;
	}
	if (nb == 4 && duo >= 1)
		return (1);
	return (0);
}
