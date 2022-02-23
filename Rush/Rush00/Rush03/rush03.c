/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 13:10:51 by humartin          #+#    #+#             */
/*   Updated: 2022/01/15 14:56:50 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_updown(int x, int z);

void	ft_center(int x, int y);

void	rush(int x, int y)
{
	int	c;
	int	f;

	c = 2;
	f = 2;
	if (x > 0 && y > 0)
	{
		ft_updown(x, c);
		ft_center(x, y);
		if (y >= 2)
			ft_updown(x, f);
	}
}
