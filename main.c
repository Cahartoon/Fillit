#include "libft.h"
#include "fillit.h"

int		main(int argc, const char *argv[])
{
	f_list	*lst;
	char	**board;

	if (!ft_validread(argv[1]))
	{
		ft_putendl("error");
		return (0);
	}
	lst = ft_flstset(ft_parse(argv[1]));
	if (ft_testbarre(lst))
		board = ft_setboard(ft_testbarre(lst));
	else
		board = ft_setboard(ft_biggestsqrt(4 * ft_piececount(lst)));
	while (!ft_backtracking(board, lst, 0, 0))
	{
		board = ft_setboard(ft_tablen(board) + 1);
	}
	ft_puttab(board);
	return (0);
}
