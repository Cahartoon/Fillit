#include "fillit.h"
#include "libft.h"

f_list		*ft_parse(const char *file)
{
	int		fd;
	int		ret;
	char	buffer[22];
	f_list	*header;

	header = NULL;
	ret = 1;
	fd = open(file, O_RDONLY);
	while (ret)
	{
		ret = read(fd, buffer, 21);
		buffer[ret] = '\0';
		if (!header)
			header = ft_flstnew(buffer);
		else
			ft_flstappend(header, ft_flstnew(buffer));
		ft_bzero(buffer, 22);
	}
	close(fd);
	return (header);
}
