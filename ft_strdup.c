/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tren <tren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/21 15:39:44 by tren              #+#    #+#             */
/*   Updated: 2020/09/21 15:45:08 by tren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*str;
	int		size;

	size = ft_strlen(src) + 1;
	if (!(str = (char *)malloc(sizeof(char) * (size))))
		return (NULL);
	return (ft_memcpy(str, src, size));
}
