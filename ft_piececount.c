/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_piececount.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edinguim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/24 19:14:30 by edinguim          #+#    #+#             */
/*   Updated: 2017/11/24 19:15:49 by edinguim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "fillit.h"

int		ft_piececount(f_list *liste)
{
	int		count;

	count = 0;
	while (liste->next)
	{
		count++;
		liste = liste->next;
	}
	return (count);
}
