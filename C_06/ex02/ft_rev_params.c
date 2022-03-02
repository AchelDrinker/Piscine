/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 19:08:07 by humartin          #+#    #+#             */
/*   Updated: 2022/01/24 20:26:12 by humartin         ###   ########.fr       */
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
	int		c;

	if (argc > 1)
	{
		c = 1;
		while (argv[c] != NULL)
		{
			c++;
		}
		c = c - 1;
		while (c > 0)
		{
			str = argv[c];
			i = 0;
			while (str[i] != '\0')
			{
				ft_putchar(str[i]);
				i++;
			}
			write (1, "\n", 1);
			c--;
		}
	}
}
