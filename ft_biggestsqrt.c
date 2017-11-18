#include "libft.h"
#include "fillit.h"

int		ft_biggestsqrt(int n)
{
	int		i;

	i = 0;
	while (i * i < n)
		i++;
	return (i);
}
