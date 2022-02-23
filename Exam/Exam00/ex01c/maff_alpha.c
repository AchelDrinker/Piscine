/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 12:44:08 by humartin          #+#    #+#             */
/*   Updated: 2022/01/14 12:45:10 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char lowercase;

	char uppercase;

	char letter;

	lowercase = 'a';
	uppercase = 'B';
	letter = 1;

	while (letter <= 26)
	{
		write (1, &lowercase, 1);
		lowercase = lowercase + 2;

		write (1, &uppercase, 1);
		uppercase = uppercase + 2;
		
		letter = letter + 2;
	}
	write (1, &"\n", 1);
}
