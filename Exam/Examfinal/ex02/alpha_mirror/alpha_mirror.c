/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 17:53:02 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 20:02:16 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void alpha_mirror(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'M')
		{
			str[i] = str[i] + (((str[i] - 77) * (-2)) + 1);
			ft_putchar(str[i]);
		}
		else if (str[i] >= 'N' && str[i] <= 'Z')
		{
			str[i] = str[i] + (((str[i] - 78) * (-2)) - 1);
			ft_putchar(str[i]);
		}
		else if (str[i] >= 'a' && str[i] <= 'm')
		{
			str[i] = str[i] + (((str[i] - 109) * (-2)) + 1);
			ft_putchar(str[i]);
		}
		else if (str[i] >= 'n' && str[i] <= 'z')
		{
			str[i] = str[i] + (((str[i] - 110) * (-2)) - 1);
			ft_putchar(str[i]);
		}
		else
			ft_putchar (str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		alpha_mirror(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
