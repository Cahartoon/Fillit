/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_deletepiece.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:16 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:33 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
