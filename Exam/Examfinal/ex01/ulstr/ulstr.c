/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 07:35:34 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 07:41:23 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ulstr(char *str)
{
	int i;

	i = 0;
	while (str[i] !='\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		ft_putchar(str[i]);	
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ulstr(argv[1]);
	}
	write(1, "\n", 1);
	return 0;
}
