/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:45:24 by humartin          #+#    #+#             */
/*   Updated: 2022/01/14 11:48:57 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_numbers(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		write (1, &a, 1);
		a++;
	}
}

int main()
{
	ft_print_numbers();
	return 0;
}
