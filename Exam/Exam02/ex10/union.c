/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 12:29:29 by humartin          #+#    #+#             */
/*   Updated: 2022/01/28 13:42:56 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

char check_doubles(char *str, char c, int pos)
{
	int i;

	i = 0;
	while ((str[i] != '\0') && (i < pos))
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

void ft_union(char *str, char *str2)
{
	int i;
	int j;
	int k;
	
	i = 0;
	j = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (check_doubles(str, str[i], i) == 1)
				write(1, &str[i], 1);
		i++;
	}

	while (str2[j] != '\0')
	{
		if (check_doubles(str2, str2[j], j) == 1)
		{
			write(1, &str2[j], 1);
		}
		j++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}
