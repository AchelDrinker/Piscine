/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 18:51:22 by humartin          #+#    #+#             */
/*   Updated: 2022/01/26 12:43:28 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	char	*str;
	int		i;

	if (argc > 0)
	{
		i = 0;
		str = argv[0];
		while (str[i] != '\0')
		{
			ft_putchar(str[i]);
			i++;
		}
		write(1, "\n", 1);
	}
}
