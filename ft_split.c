/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tren <tren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/15 10:27:32 by tren              #+#    #+#             */
/*   Updated: 2020/09/18 16:46:11 by tren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		is_del(char a, char c)
{
	if (a == c)
		return (1);
	return (0);
}

char	*is_word(int *i, const char *s, char c)
{
	int		j;
	int		k;
	char	*tab;

	j = *i;
	k = 0;
	while (s[*i] && is_del(s[*i], c) == 0)
		*i = *i + 1;
	if (!(tab = malloc(sizeof(tab) * (*i + 1))))
		return (0);
	while (j + k < *i)
	{
		tab[k] = s[j + k];
		k++;
	}
	tab[k] = '\0';
	return (tab);
}

char	**spliter(const char *s, char c, int size)
{
	char	**dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!(dest = malloc(sizeof(dest) * (size + 1))))
		return (0);
	while (s[i] && is_del(s[i], c) == 1)
		i++;
	while (j < size)
	{
		dest[j] = is_word(&i, s, c);
		while (s[i] && is_del(s[i], c) == 1)
			i++;
		j++;
	}
	dest[j] = 0;
	return (dest);
}

char	**ft_split(const char *s, char c)
{
	int	i;
	int	nbw;

	i = 0;
	nbw = 0;
	while (s[i])
	{
		if ((is_del(s[i + 1], c) == 1 || s[i + 1] == 0)
				&& (is_del(s[i], c) == 0))
			nbw++;
		i++;
	}
	return (spliter(s, c, nbw));
}
