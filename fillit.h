/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:00 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:23 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int					ft_checkfile(const char *file);
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
int					ft_tabtab(char **board, f_list *lst, int x, int y);
void				ft_putpiece(char **board, f_list *lst, int x, int y);
void				ft_deletepiece(char **board, f_list *lst);
int					ft_backtracking(char **board, f_list *lst, int x, int y);
int					ft_testbarre(f_list *lst);

#endif
