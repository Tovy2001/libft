/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tren <tren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 14:46:58 by tren              #+#    #+#             */
/*   Updated: 2020/09/21 15:57:58 by tren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	const char	*s;
	const char	*ends;
	char		*endd;

	d = dest;
	s = src;
	if (d == 0 && s == 0)
		return (dest);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		ends = s + (n - 1);
		endd = d + (n - 1);
		while (n--)
			*endd-- = *ends--;
	}
	return (dest);
}
