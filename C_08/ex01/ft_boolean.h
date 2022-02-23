/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: humartin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:27:13 by humartin          #+#    #+#             */
/*   Updated: 2022/02/02 06:30:39 by humartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# define TRUE  1
# define FALSE 0
# define SUCCESS 0
# define EVEN_MSG    "I have an even number of arguments.\n"
# define ODD_MSG     "I have an odd number of arguments.\n"
# define EVEN(nbr) (nbr % 2 == 0)

void	ft_putstr(char *str);

t_bool	ft_is_even(int nbr);

#endif
