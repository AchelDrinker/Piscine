/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 17:51:37 by humartin          #+#    #+#             */
/*   Updated: 2022/01/21 12:49:53 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char a)
{
	write(1, &a, 1);
}

char rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
	
			while ((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i] <= 'M'))
			{
				str[i] = str[i] + 13;
				ft_putchar(str[i]);
				i++;
			}
		
			while ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
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
	char *str = argv[1];
	if (argc == 2)
	{
		rot_13(str);
	}
	write(1, "\n", 1);
	return 0;
}
