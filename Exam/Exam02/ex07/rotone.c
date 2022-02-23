/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:41:28 by humartin          #+#    #+#             */
/*   Updated: 2022/01/27 21:22:02 by humartin         ###   ########.fr       */
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
				if (((argv[1][i] >= 'a') && (argv[1][i] <= 'y')) || ((argv[1][i] >= 'A') && (argv[1][i] <= 'Y')))
				{
					argv[1][i] = argv[1][i] + 1;
					ft_putchar(argv[1][i]);
				}
				else if ((argv[1][i] == 'z') || (argv[1][i] == 'Z'))
				{
					argv[1][i] = argv[1][i] - 25;
					ft_putchar(argv[1][i]);
				}
				else
					ft_putchar(argv[1][i]);
				i++;
			}
	}
	write(1, "\n", 1);
}


