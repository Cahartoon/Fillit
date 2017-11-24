/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validblock.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:49 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:16:02 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include "libft.h"
int		ft_validblock(char *buffer, int size)
{
	if (size < 20)
		return (0);
	if (size == 20 && buffer[19] != '\n')
		return (0);
	if (size == 21 && buffer[19] != '\n' && buffer[20] != '\n')
		return (0);
	if (!ft_validcontent(buffer, size))
		return (0);
	return (1);
}
