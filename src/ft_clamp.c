/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clamp.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alero <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:53:41 by alero             #+#    #+#             */
/*   Updated: 2021/02/10 11:55:51 by alero            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_clamp(int min, int max, int nb)
{
	if (nb < min)
		return (min);
	if (nb > max)
		return (max);
	return (nb);
}
