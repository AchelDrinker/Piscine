/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 10:33:43 by humartin          #+#    #+#             */
/*   Updated: 2022/01/24 18:19:57 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_rec(int nb, int power, int result)
{
	if (power > 1)
	{
		nb = result * nb;
		power-- ;
		return (ft_rec(nb, power, result));
	}
	else
		return (nb);
}

int	ft_recursive_power(int nb, int power)
{	
	int	result;

	result = nb;
	if (power == 0)
	{
		return (1);
	}	
	else if (power >= 1)
	{
		return (ft_rec(nb, power, result));
	}
	else
	{
		return (0);
	}
	return (0);
}
