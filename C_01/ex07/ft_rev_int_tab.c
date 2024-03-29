/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 15:24:17 by humartin          #+#    #+#             */
/*   Updated: 2022/01/17 10:09:28 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	y;
	int	arr[size];

	y = size - 1;
	i = 0;
	while (y >= 0)
	{
		arr[i] = tab[y];
		y--;
		i++;
	}
	y = 0;
	while (y < size)
	{
		tab[y] = arr [y];
		y++;
	}
}
