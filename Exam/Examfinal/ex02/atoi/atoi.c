/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 11:57:40 by humartin          #+#    #+#             */
/*   Updated: 2022/02/01 12:32:46 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str)
{
	long long result;
	int n;
	int neg;
	
	n = 1;
	neg = 1;
	result = 0;
	while (*str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = neg * (-1);
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		str++;
	}
	str--;
	result = result + (*str - 48);
	str--;	
	while(*str >= '0' && *str <= '9')
	{
		result = result + ((*str - 48) * (10 * n));
		str--;
		n = n * 10;
	}
	result = neg * result;
	return (result);
}
int main()
{
	printf("%d", ft_atoi(" ---+--+1234ab567"));
	return 0;
}
