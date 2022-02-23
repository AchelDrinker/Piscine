/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 07:42:19 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 08:53:25 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write(1, &c, 1);
}

void rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (((str[i] >= 'a') && (str[i] <= 'm')) || ((str[i] >= 'A') && (str[i] <= 'M')))
		{
			str[i] = str[i] + 13;
		}
		else if (((str[i] >= 'n') && (str[i] <= 'z')) || ((str[i] >= 'N') && (str[i] <= 'Z')))
		{
			str[i] = str[i] - 13;
		}
		ft_putchar(str[i]);
		i++;
	}
}
int main (int argc, char **argv)
{
	if (argc == 2)
	{
		rot_13(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
