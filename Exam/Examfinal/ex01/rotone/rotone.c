/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:18:09 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 11:23:42 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i]<= 'y') || (str[i] >= 'A' && str[i] <= 'Y'))
		{
			str[i] = str[i] + 1;
		}
		else if (str[i] == 'z' || str[i] == 'Z')
		{
			str[i] = str[i] - 25;
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		rotone(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
