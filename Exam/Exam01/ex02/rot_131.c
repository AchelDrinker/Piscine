/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_131.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 12:59:21 by humartin          #+#    #+#             */
/*   Updated: 2022/01/21 13:22:31 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char rot_131(char str[])
{
	int i;
	i = 0;
while (str[i] != '\0')
{
	if (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >= 'A') && (str[i] <= 'Z')))
	{
		while (((str[i] >= 'a') && (str[i] <= 'm')) || ((str[i] >= 'A') && (str[i] <= 'M')))
		{
			str[i] = str[i] + 13;
			ft_putchar(str[i]);
			i++;
		}
		while (((str[i] >= 'n') && (str[i] <= 'z')) || ((str[i] >= 'N') && (str[i] <= 'Z')))
		{
			str[i] = str[i] - 13;
			ft_putchar(str[i]);
			i++;
		}
	}
	else
	{
		ft_putchar(str[i]);
		i++;
	}
}
	return (*str);
}
int main(int argc, char **argv)
{
	char *str;
	str = argv[1];
	if (argc == 2)
	{
		rot_131(str);
	}
	write (1, "\n", 1);
	return 0;
}
