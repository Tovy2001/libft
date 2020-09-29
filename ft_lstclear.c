/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tren <tren@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/29 08:41:35 by tren              #+#    #+#             */
/*   Updated: 2020/09/29 09:52:09 by tren             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*l;

	if (!del)
		return ;
	while (*lst)
	{
		l = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = l;
	}
	*lst = NULL;
}
