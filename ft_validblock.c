#include "fillit.h"
#include "libft.h"
int		ft_validblock(char *buffer, int size)
{
	if (size < 20)
		return (0);
	if (size == 20 && buffer[19] != '\n')
		return (0);
	if (size == 21 && buffer[19] != '\n' && buffer[20] != '\n')
		return (0);
	if (!ft_validcontent(buffer, size))
		return (0);
	return (1);
}
