/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_testbarre.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:45 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:16:00 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_testbarre(f_list *lst)
{
	int		lstlen;
	int		i;

	i = 0;
	lstlen = ft_piececount(lst);
	while (lst->next &&
			((lst->width == 1 && lst->height == 4) ||
			(lst->width == 4 && lst->height == 1)))
	{
		i++;
		lst = lst->next;
	}
	if (i == lstlen)
		return (i);
	return (0);
}
