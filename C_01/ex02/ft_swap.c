/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 11:46:34 by humartin          #+#    #+#             */
/*   Updated: 2022/01/16 15:30:30 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap( int *a, int *b)
{
	int	c;

	c = *b;
	*b = *a;
	*a = c;
}
