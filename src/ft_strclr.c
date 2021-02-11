/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esukava <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 13:26:04 by esukava           #+#    #+#             */
/*   Updated: 2020/07/24 11:12:55 by esukava          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/libft.h"
void		ft_strclr(char *c)
{
	int i;

	i = 0;
	if (!c)
		return ;
	while (c[i] != '\0')
	{
		c[i] = '\0';
		i++;
	}
}