/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tren <tren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:45:42 by tren              #+#    #+#             */
/*   Updated: 2020/09/21 15:47:38 by tren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					lon(unsigned int nbr)
{
	int				len;

	len = 0;
	while (nbr >= 10)
	{
		nbr /= 10;
		len++;
	}
	return (len + 1);
}

char				*ft_itoa(int n)
{
	unsigned int	nbr;
	int				len;
	char			*alpha;

	len = 0;
	nbr = n;
	if (n < 0)
	{
		nbr = n * -1;
		len++;
	}
	len += lon(nbr);
	if (!(alpha = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	alpha[len] = '\0';
	while (len)
	{
		len--;
		alpha[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		alpha[0] = '-';
	return (alpha);
}
