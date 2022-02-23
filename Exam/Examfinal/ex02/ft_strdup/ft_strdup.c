/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 11:49:29 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 12:44:29 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	char *tab;
	int i;

	i = 0;
	tab = malloc(sizeof(char) * ft_strlen(src));
	if (!tab)
		return 0;
	while (src[i] != '\0')
	{
		tab[i] = src[i];
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
int main()
{
	char *src;

	src = "Hello World!";
	printf("%s", ft_strdup(src));
   return 0;	
}
