/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 10:16:17 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 11:17:05 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rev_print(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	i = i - 1;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i--;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_print(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
