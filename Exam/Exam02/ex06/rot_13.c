/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 18:19:22 by humartin          #+#    #+#             */
/*   Updated: 2022/01/27 18:59:40 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv [1][i] != '\0')
			{
				if (((argv[1][i] >= 'a') && (argv[1][i] <= 'm')) || ((argv[1][i] >= 'A') && (argv[1][i] <= 'M')))
				{
					argv[1][i] = argv[1][i] + 13;
					ft_putchar(argv[1][i]);
				}
				else if (((argv[1][i] >= 'n') && (argv[1][i] <= 'z')) || ((argv[1][i] >= 'N') && (argv[1][i] <= 'Z')))
				{
					argv[1][i] = argv[1][i] - 13;
					ft_putchar(argv[1][i]);
				}
				else
					ft_putchar(argv[1][i]);
				i++;
			}
	}
	write(1, "\n", 1);
}

