/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flstappend.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:19 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:35 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

void	ft_flstappend(f_list *header, f_list *feet)
{
	f_list	*ptr;

	if (!header)
		return ;
	ptr = header;
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = feet;
}
