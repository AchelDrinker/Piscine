/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:16:25 by humartin          #+#    #+#             */
/*   Updated: 2022/02/01 17:06:40 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int ii;

	i = 0;
	ii = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				ii = argv[1][i] - 96;
				while (ii > 0)
				{
					ft_putchar(argv[1][i]);
					ii--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				ii = argv[1][i] - 64;
				while (ii > 0)
				{
					ft_putchar(argv[1][i]);
					ii--;
				}
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
