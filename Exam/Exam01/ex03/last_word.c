/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:52:22 by humartin          #+#    #+#             */
/*   Updated: 2022/01/21 14:50:48 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char a)
{
	write(1, &a, 1);
}

void last_word(char str[])
{
	int i;
	int c;
	int d;
	i = 0;
	c = 0;
	d = 0;
	while (str[i] != '\0')
		{
			i++;
		}
	i = i - 1;
	if (((str[i] < 'a') && (str[i] > 'z')) || ((str[i] < 'A') && (str[i] > 'Z')))
		{
			while (((str[i] < 'a') && (str[i] > 'z')) || ((str[i] < 'A') && (str[i] > 'Z')))
				{
					i--;
				}
			c = i - 1;
			while (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >='A') && (str[i] <= 'Z')))
				{
					i--;
				}
			d = i + 1;
		while (str[d] != str[c])
			{
				ft_putchar(str[d]);
				d++;
			}

		}
	else
		{
			c = i + 1;
			while (((str[i] >= 'a') && (str[i] <= 'z')) || ((str[i] >='A') && (str[i] <= 'Z')))
				{
					i--;
				}
			d = i + 1;
			while (str[d] != str[c])
				{
					ft_putchar(str[d]);
					d++;
				}
		}
}
int main(int argc, char **argv)
{
	char *str;
	str = argv[1];
	if (argc == 2)
	{
		last_word(str);
	}
	write(1, "\n", 1);
	return 0;
}
