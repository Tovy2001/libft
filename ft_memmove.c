/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tren <tren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/03 14:46:58 by tren              #+#    #+#             */
/*   Updated: 2020/09/03 14:54:37 by tren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*cdst;
	unsigned char	*csrc;

	i = 0;
	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	if (cdst > csrc)
		while (i < len)
		{
			cdst[len - 1] = csrc[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			cdst[i] = csrc[i];
			len--;
		}
	return (dst);
}
