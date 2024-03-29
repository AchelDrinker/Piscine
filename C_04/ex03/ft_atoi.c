/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 11:47:28 by humartin          #+#    #+#             */
/*   Updated: 2022/01/31 15:36:04 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_pow_rec(int i, int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (i);
	return (i * ft_pow_rec(i, n - 1));
}

int	ft_atoi(char *str)
{
	long long	res;
	int			neg;
	int			i;

	i = 0;
	result = 0;
	neg = 1;
	while (*str <= 32)
		str++;
	while (*str && ((*str == '-' || *str == '+')))
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	while (*str && ((*str >= '0' && *str <= '9')))
		str++;
	str--;
	while ((*str >= '0' && *str <= '9'))
	{
		result = result * ((*str--) - '0') * ft_pow_rec(10, i++);
	}
	return ((int)(res * neg));
}
