/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esukava <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/16 15:48:19 by esukava           #+#    #+#             */
/*   Updated: 2020/10/16 15:48:27 by esukava          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_abs(int n)
{
	if(n < 0)
		n = n * -1;
	return(n);
}
