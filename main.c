#include "libft.h"
#include "fillit.h"

int		main(int argc, const char *argv[])
{
	f_list	*liste;
	char	**board;

	if (!ft_validread(argv[1]))
	{
		ft_putendl("error");
		return (0);
	}
	liste = ft_flstset(ft_parse(argv[1]));
	board = ft_setboard(ft_biggestsqrt(4 * ft_piececount(liste)));
	while (liste->next)
	{
		ft_puttab(liste->piece);
		ft_putchar(liste->letter);
		ft_putstr("\nwidth : ");
		ft_putnbr(liste->width);
		ft_putstr("   height : ");
		ft_putnbr(liste->height);
		ft_putendl("\n");
		liste = liste->next;
	}
	ft_puttab(board);
	ft_putchar('\n');
	ft_putendl("valid");
	return (0);
}
