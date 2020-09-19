/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tren <tren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/12 13:39:42 by tren              #+#    #+#             */
/*   Updated: 2020/09/12 13:57:44 by tren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_set(const char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	len;
	int	start;
	int	end;

	end = ft_strlen(s1);
	start = 0;
	while (is_set(s1[start], set) != 0)
		start++;
	while (start < end && (is_set(s1[end - 1], set) != 0))
		end--;
	len = end - start;
	return (ft_substr(s1, start, len));
}
