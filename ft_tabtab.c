/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:43 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:58 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"

int		ft_tabtab(char **board, f_list *lst, int x, int y)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if ((x + lst->height) <= ft_tablen(board) && (y + lst->width) <= ft_tablen(board))
	{
		while ((board[x + i][y + j] == '.' || lst->piece[i][j] == '.')
			&& j < lst->width && i < lst->height)
		{
			if (j == lst->width - 1)
			{
				if (i == lst->height - 1)
				{
					ft_putpiece(board, lst, x, y);
					return (1);
				}
				i++;
				j = 0;
			}
			else
				j++;
		}
	}
	return (0);
}
