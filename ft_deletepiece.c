#include "libft.h"
#include "fillit.h"

void	ft_deletepiece(char **board, f_list *lst)
{
	int		x;
	int		y;

	x = 0;
	while (board[x])
	{
		y = 0;
		while (board[x][y])
		{
			if (board[x][y] == lst->letter)
				board[x][y] = '.';
			y++;
		}
		x++;
	}
}
