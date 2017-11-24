/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:13 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:31 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_checkfile(const char *file)
{
	int		fd;
	int		ret;
	char	buffer[547];

	ret = 1;
	fd = open(file, O_RDONLY);
	ret = read(fd, buffer, 546);
	buffer[ret] = '\0';
	if (buffer[ret - 1] == '\n' && buffer[ret - 2] == '\n')
	{
		close(fd);
		return (0);
	}
	close(fd);
	return (1);
}
