/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 11:18:19 by humartin          #+#    #+#             */
/*   Updated: 2022/01/14 12:16:35 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_countdown(void)
{
	char a;
	a = '9';

	while (a >= '0')
	{
		write(1, &a, 1);
		a--;
	}
}

int main()
{
	ft_countdown();
	write (1, &"\n", 1);
	return 0;
}
