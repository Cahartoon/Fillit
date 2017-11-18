#include "libft.h"
#include "fillit.h"

int		ft_validread(const char *file)
{
	int		fd;
	int		ret;
	int		i;
	char	buffer[22];

	ret = 1;
	i = 0;
	fd = open(file, O_RDONLY);
	while (ret)
	{
		ret = read(fd, buffer, 21);
		buffer[ret] = '\0';
		if (ret)
		{
			i++;
			if (!ft_validblock(buffer, ret))
			{
				return (0);
			}
		}
		ft_bzero(buffer, 22);
	}
	close(fd);
	if (!i || i > 26)
		return (0);
	return (1);
}
