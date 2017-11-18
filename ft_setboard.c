#include "fillit.h"
#include "libft.h"

char	**ft_setboard(int size)
{
	char	**board;
	int		i;

	i = 0;
	if (!(board = (char**)malloc(sizeof(*board) * (size + 1))))
		return (NULL);
	while (i < size)
	{
		if (!(board[i] = ft_strnew(size)))
			return (NULL);
		board[i] = ft_memset(board[i], 46, size);
		i++;
	}
	board[i] = 0;
	return (board);
}
