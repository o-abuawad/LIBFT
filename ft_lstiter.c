/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:20:52 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/30 13:46:07 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*currnet;

	if (!lst || !f)
		return ;
	currnet = *lst;
	while (currnet)
	{
		f(currnet->content);
		currnet = currnet->next;
	}
}
