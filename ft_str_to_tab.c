/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:38 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:55 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"


static void		ft_replace_line(char *str, int i)
{
	int		j;

	j = 0;
	while (j < 4)
	{
		str[i++] = '\n';
		j++;
	}
}

static void		ft_replace_column(char *str, int i)
{
	int		j;

	j = 0;
	while (j < 4)
	{
		str[i] = '\n';
		i += 5;
		j++;
	}
}

char		**ft_str_to_tab(char *str)
{
	int		i;
	char	**res;

	i = 0;
	while (i < 4)
	{
		if (str[i * 5] != '#' && str[(i * 5) + 1] != '#'
				&& str[(i * 5) + 2] != '#' && str[(i * 5) + 3] != '#')
			ft_replace_line(str, (i * 5));
		if (str[i] != '#' && str[i + 5] != '#'
				&& str[i + 10] != '#' && str[i + 15] != '#')
			ft_replace_column(str, i);
		i++;
	}
	res = ft_strsplit(str, '\n');
	return (res);
}
