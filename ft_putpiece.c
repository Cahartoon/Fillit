/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpiece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:32 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:51 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	ft_puttab(board);
	ft_putchar('\n');
}
