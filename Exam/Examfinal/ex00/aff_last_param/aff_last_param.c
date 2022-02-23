/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:32:27 by humartin          #+#    #+#             */
/*   Updated: 2022/02/01 15:36:19 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	argc = argc - 1;
	i = 0;
	while (argv[argc][i] != '\0')
	{
		ft_putchar(argv[argc][i]);
		i++;
	}
	write(1, "\n", 1);
}
