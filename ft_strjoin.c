/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:13:50 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/29 10:52:27 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	n = malloc(1);
	if (!n)
		return (NULL);
	n[0] = '\0';
	while (s1[i])
	{
		n[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		n[i] = s2[j];
		i++;
		j++;
	}
	n[i] = '\0';
	return (n);
}

// int	main()
// {
// 	char	*c;
//
// 	c = ft_strjoin("hello ", "world");
// 	printf("%s\n", c);
// 	free(c);
// 	return (0);
// }
