#ifndef FILLIT_H
# define FILLIT_H
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>

typedef struct		s_piece
{
	char			**piece;
	int				width;
	int				height;
	char			letter;
	struct s_piece	*next;
}					f_list;

int					ft_validread(const char *file);
int					ft_validblock(char *buffer, int size);
int					ft_validcontent(char *buffer, int size);
int					ft_validpattern(char *buffer);
int					ft_validconnect(char *buffer, int i);
f_list				*ft_parse(const char *file);
f_list				*ft_flstnew(char *buffer);
f_list				*ft_flstset(f_list *header);
void				ft_flstappend(f_list *header, f_list *feet);
int					ft_piececount(f_list *liste);
int					ft_tablen(char **tab);
char				**ft_setboard(int size);
int					ft_biggestsqrt(int n);
char				**ft_str_to_tab(char *str);

#endif
