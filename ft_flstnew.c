/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flstnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:21 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:37 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

f_list		*ft_flstnew(char *buffer)
{
	f_list	*new;

	new = (f_list*)malloc(sizeof(f_list));
	if (new)
		if (buffer)
		{
			new->piece = ft_str_to_tab(buffer);
		}
	if (!new->piece)
		return (NULL);
	new->next = NULL;
	return (new);
}
