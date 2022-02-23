/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 13:16:33 by humartin          #+#    #+#             */
/*   Updated: 2022/01/14 13:16:40 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(void)
{
	int lowercase;
	int uppercase;
	int letter;

	lowercase = 'z';
	uppercase = 'Y';
	letter = 26;

	while (letter >= 1)
	{
		write (1, &lowercase, 1);
		lowercase = lowercase - 2;

		write (1, &uppercase, 1);
		uppercase = uppercase - 2;

		letter = letter - 2;
	}
	write (1, &"\n", 1);
	return (0);
}
