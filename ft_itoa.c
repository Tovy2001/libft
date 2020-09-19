/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tren <tren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 11:45:42 by tren              #+#    #+#             */
/*   Updated: 2020/09/18 16:47:54 by tren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		length(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (12);
	else if (n == 0)
		return (2);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len + 1);
}

char	*ft_itoa(int n)
{
	unsigned int	nbr;
	int				sign;
	int				len;
	char			*dest;

	sign = (n < 0 ? 1 : 0);
	dest = NULL;
	len = length(n);
	nbr = (n < 0 ? -n : n);
	if (!(dest = (char*)malloc(sizeof(char) * len + 1)))
		return (NULL);
	dest[len--] = '\0';
	while (len >= 0)
	{
		dest[len] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	if (sign == 1)
		dest[0] = '-';
	return (dest);
}
