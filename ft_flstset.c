/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flstset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:24 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:39 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

f_list		*ft_flstset(f_list *header)
{
	f_list	*ptr;
	char	c;

	if (!header)
		return (NULL);
	ptr = header;
	c = 'A';
	while (ptr->next)
	{
		ptr->width = ft_strlen(ptr->piece[0]);
		ptr->height = ft_tablen(ptr->piece);
		ptr->letter = c++;
		ptr = ptr->next;
	}
	return (header);
}
