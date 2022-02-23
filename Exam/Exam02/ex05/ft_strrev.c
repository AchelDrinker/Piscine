/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:25:12 by humartin          #+#    #+#             */
/*   Updated: 2022/01/27 18:18:12 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrev(char *str)
{
	int i;
	int ii;
	int c;
	
	c = 0;
	ii = 0;
	i = 0;
	while (str[ii] != '\0')
	{
		ii++;
	}
	ii = ii - 1;
	while (ii > i)
	{
		c = str[i];
		str[i] = str[ii];
		str[ii] = c;
		i++;
		ii--;
	}
	return (str);
}
int main ()
{
	char str[] = "J'aime pas le chocolat";

	printf("%s", ft_strrev(str));
	return 0;
}
