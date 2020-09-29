/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tren <tren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/06 17:54:25 by tren              #+#    #+#             */
/*   Updated: 2020/09/21 15:52:23 by tren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d;
	size_t	s;

	s = 0;
	d = 0;
	s = ft_strlen(src);
	d = ft_strlen(dst);
	i = 0;
	if (d > size)
		return (s + size);
	if (size < d)
		s = s + size;
	else
		s = s + d;
	while (src[i] != '\0' && d + 1 < size && dst != src)
	{
		dst[d] = src[i];
		i++;
		d++;
	}
	dst[d] = '\0';
	return (s);
}
