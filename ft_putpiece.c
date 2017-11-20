#include "libft.h"
#include "fillit.h"

void	ft_putpiece(char **board, f_list *lst, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	while (i < lst->height)
	{
		j = 0;
		while (j < lst->width)
		{
			if (lst->piece[i][j] =='#')
				board[x + i][y + j] = lst->letter;
			j++;
		}
		i++;
	}
}
