/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:48:40 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 17:31:47 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int check(char *str, int c, int n)
{
	int i;
	i = 0;
	while ((str[i] != '\0') && (i < n))
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}
int check2(char *str, int c)
{
	int i;
	i = 0;
	while (str[i] != '\0')
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

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (str[i] != str2[j])
			{
				if (check(str, str[i], i) == 1)
				{
					ft_putchar(str[i]);
					break;
				}
			}
			j++;
		}
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		j = 0;
		while (str[j] != '\0')
		{
			if (str2[i] != str[j])
			{
				if ((check2(str, str2[i]) == 1) && (check(str2, str2[i], i) == 1))
				{
					ft_putchar(str2[i]);
					break;
				}
			}
			j++;
		}
		i++;
	}
}


int main (int argc, char **argv)
{
	if (argc == 3)
	{
		ft_union(argv[1], argv[2]);
	}
	write(1, "\n", 1);
	return 0;
}
