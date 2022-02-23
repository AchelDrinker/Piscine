/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:41:09 by humartin          #+#    #+#             */
/*   Updated: 2022/01/27 16:23:52 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main (int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (((argv[1][i] == ' ') || (argv[1][i] == '\t')) && (argv[1][i] != '\0'))
		{
			i++;
		}
		while (((argv[1][i] != ' ') && (argv[1][i] != '\t')) && (argv[1][i] != '\0'))
		{
			ft_putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
}
