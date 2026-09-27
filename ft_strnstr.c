/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:46:33 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/25 01:22:40 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*b;
	char	*l;

	b = (char *)big;
	l = (char *)little;
	i = 0;
	if (len == 0 || l[0] == '\0')
		return (b);
	while (b[i] && len != 0)
	{
		j = 0;
		while (b[i + j] == l[j] && b[i + j])
		{
			j++;
			if (l[j] == '\0' || len == 0)
				return (&b[i]);
		}
		i++;
		len--;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *c;
//
// 	c = ft_strnstr("42amman", "42a", 4);
// 	if (c)
// 		printf("%s\n", c);
// 	else
// 		printf("Not found (NULL)\n");
// 	return (0);
// }
