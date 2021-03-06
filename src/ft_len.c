/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esukava <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 12:27:58 by esukava           #+#    #+#             */
/*   Updated: 2020/07/13 15:43:27 by esukava          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_len(int n)
{
	if (n == -2147483648 || n <= -1000000000)
		return (10 + 1);
	if (n >= 1000000000 || n <= -100000000)
		return (10);
	if (n >= 100000000 || n <= -10000000)
		return (9);
	if (n >= 10000000 || n <= -1000000)
		return (8);
	if (n >= 1000000 || n <= -100000)
		return (7);
	if (n >= 100000 || n <= -10000)
		return (6);
	if (n >= 10000 || n <= -1000)
		return (5);
	if (n >= 1000 || n <= -100)
		return (4);
	if (n >= 100 || n <= -10)
		return (3);
	if (n >= 10 || n <= -1)
		return (2);
	if (n >= 1)
		return (1);
	if (n == 0)
		return (1);
	return (0);
}
