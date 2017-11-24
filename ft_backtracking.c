/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:06 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:25 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_backtracking(char **board, f_list *lst, int x, int y)
{
	if (!lst->next)
		return (1);
	if (y > ft_tablen(board) - 1 && x < ft_tablen(board) - 1)
	{
		y = 0;
		x++;
	}
	if (y == ft_tablen(board) && x == ft_tablen(board) - 1)
		return (0);
	if (ft_tabtab(board, lst, x, y))
	{
		if (ft_backtracking(board, lst->next, 0, 0))
			return (1);
		else
		{
			ft_deletepiece(board, lst);
			return (ft_backtracking(board, lst, x, y + 1));
		}
	}
	else
		return (ft_backtracking(board, lst, x, y + 1));
	return (0);
}
