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
	i = 0;
	if (len == 0 || l[0] == '\0' || l[i] == '\0')
		return (b);
	while (b[i] && i < len)
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

// int main(void)
// {
// 	char *c;
//
// 	c = ft_strnstr("42amman", "42a", -2);
// 	printf("%s\n", c);
// 	return (0);
// }
