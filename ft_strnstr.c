/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 20:46:33 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/27 14:02:39 by oabu-awa         ###   ########.fr       */
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
	if (l[0] == '\0')
		return (b);
	i = 0;
	while (b[i] && i < len)
	{
		j = 0;
		while (b[i + j] == l[j] && (i + j) < len)
		{
			j++;
			if (l[j] == '\0')
				return (&b[i]);
		}
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char *c;
//
// 	c = ft_strnstr("42amman", "42a", -2);
// 	printf("%s\n", c);
// 	return (0);
// }
