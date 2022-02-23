/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 21:23:49 by humartin          #+#    #+#             */
/*   Updated: 2022/01/28 11:23:48 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char check_doubles(char *str, char c, int pos)
{
	int i;

	i = 0;
	while (str[i] != '\0' && i < pos )
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

void inter (char *str, char *str2)
{
	int i;
	int j;
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str2[j] != '\0')
		{
			if (check_doubles(str, str[i], i) == 1)
			{
				write(1, &str[i], 1);
				break ;
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
