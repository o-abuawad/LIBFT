/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:04:36 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/30 13:20:17 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*currnet;
	t_list	*nnext;

	if (!lst || !del)
		return ;
	currnet = *lst;
	while (currnet)
	{
		nnext = currnet->next;
		del(currnet->content);
		free(currnet);
		currnet = nnext;
	}
	*lst = NULL;
}
