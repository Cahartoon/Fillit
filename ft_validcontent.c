/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validcontent.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:54 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:16:06 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_validcontent(char *buffer, int size)
{
	int		countpt;
	int		countx;
	int		i;

	countpt = 0;
	countx = 0;
	i = 0;
	while (i < size)
	{
		if (buffer[i] == '.')
			countpt++;
		if (buffer[i] == '#')
			countx++;
		if (i == 4 || i == 9 || i == 14 || i == 19)
			if (buffer[i] != '\n')
				return (0);
		i++;
	}
	if (countx == 4 && countpt == 12)
		if (ft_validpattern(buffer))
			return (1);
	return (0);
}
