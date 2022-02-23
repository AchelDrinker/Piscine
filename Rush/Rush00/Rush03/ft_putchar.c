/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:08:27 by humartin          #+#    #+#             */
/*   Updated: 2022/01/16 15:46:22 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_updown(int x, int z)
{
	write (1, "A", 1);
	while (z <= x - 1)
	{
		write (1, "B", 1);
		z++;
	}
	if (x >= 2)
		write (1, "C\n", 2);
	else
		write (1, "\n", 1);
}

void	ft_center(int x, int y)
{
	int	e;
	int	d;

	e = 2;
	while (e <= y - 1)
	{
		write (1, "B", 1);
		d = 2;
		while (d <= x - 1)
		{
			write (1, " ", 1);
			d++;
		}
		write (1, "B\n", 2);
		e++;
	}
}
