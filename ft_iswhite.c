/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhite.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esukava <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 16:31:38 by esukava           #+#    #+#             */
/*   Updated: 2020/10/28 16:44:05 by esukava          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iswhite(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || \
	c == '\v' || c == '\r' || c == '\f')
	{
		return (1);
	}
	return (0);
}