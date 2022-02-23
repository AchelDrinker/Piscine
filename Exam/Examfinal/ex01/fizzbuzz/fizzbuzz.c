/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:14:26 by humartin          #+#    #+#             */
/*   Updated: 2022/01/31 17:11:47 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*fizz /3
buzz/5
fizzbuzz/3/5*/

#include <unistd.h>
void ft_putchar (char c)
{
	write(1, &c, 1);
}

void fizzbuzz(void)
{
	int i;
	int c;
	int d;

	i = 1; 

	while (i <= 100)
	{
		if (i == 100)
			write(1, "buzz", 4);
		if (i <= 99)
		{
			if (i % 3 == 0)
				write(1, "fizz", 4);
			else if (i % 5 == 0)
				write(1, "buzz", 4);
			else if (i % 15 == 0)
				write(1, "fizzbuzz", 8);
			else
			{
				if (i <= 9)
					ft_putchar(i + 48);
				else
				{
					c = i / 10;
					ft_putchar(c + 48);
					d = i % 10;
					ft_putchar(d + 48);	
				}
			}
		}
		write(1, "\n", 1);
		i++;
	}
}

int main()
{
	fizzbuzz();
	return 0;
}
