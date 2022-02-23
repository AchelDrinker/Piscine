/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:24:37 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 11:47:48 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
	int neg;
	int i;
	int result;
	int n;

	i = 0;
	neg = 1;
	while ((str[i] != '\0') && (str[i] == ' '))
		i++;
	while ((str[i] != '\0') && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			neg = neg * (-1);
		}
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		i++;
	}
	i = i - 1;
	n = 1;
	result = 0;
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result + ((str[i] - 48) * n);
		n = n * 10;
		i--;
	}
	result = result * neg;
	return result;
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d", ft_atoi(argv[1]));
	}
	write(1, "\n", 1);
	return 0;
}
