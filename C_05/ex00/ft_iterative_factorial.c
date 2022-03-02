/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 14:40:25 by humartin          #+#    #+#             */
/*   Updated: 2022/01/22 15:39:11 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb - 1;
	if (nb == 0)
	{
		nb = 1;
		return (nb);
	}
	else if (nb > 0)
	{
		while (i > 0)
		{
			nb = nb * i;
			i--;
		}
		return (nb);
	}
	else
		return (0);
}
