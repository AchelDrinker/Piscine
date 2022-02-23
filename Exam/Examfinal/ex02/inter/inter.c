/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:45:09 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 13:41:57 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int check(char *str, int i, int n)
{
	int j;

	j = 0;
	while (str[j] != '\0' && j < i)
	{
		if (str[j] == n)
			return 0;
		j++;
	}
	return 1;
}

void inter(char *s1, char *s2)
{
	int i;
	int j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (s2[j] != '\0')
		{
			if (s1[i] == s2[j])
			{
				if (check(s1, i, s1[i]) == 1)
				{
					ft_putchar(s1[i]);
					break;
				}
			}
			j++;
		}
		i++;
	}
}


int main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return 0;
}
