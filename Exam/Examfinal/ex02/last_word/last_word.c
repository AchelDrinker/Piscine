/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 13:43:15 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 13:58:40 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void last_word(char *str)
{
	int i;
	i = 0;

	while (str[i] != '\0')
		i++;
	i = i - 1;
	while ((str[i] != '\0') && ((str[i] == ' ') || (str[i] == '\t')))
	{
		i--;
	}
	while ((str[i] != '\0') && ((str[i] != ' ') && (str[i] != '\t')))
	{
		i--;
	}
	i = i + 1;
	while ((str[i] != '\0') && ((str[i] != ' ') && (str[i] != '\t')))
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		last_word(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
