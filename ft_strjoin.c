/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:13:50 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/29 11:30:43 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*counter(char const *str1, char const *str2, char *ptr)
{
	int	i1;
	int	j1;

	i1 = 0;
	while (str1[i1])
	{
		ptr[i1] = str1[i1];
		i1++;
	}
	j1 = 0;
	while (str2[j1])
	{
		ptr[i1] = str2[j1];
		i1++;
		j1++;
	}
	ptr[i1] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*n;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	n = malloc(total_len + 1);
	if (!n)
		return (NULL);
	return (counter(s1, s2, n));
}

// int	main(void)
// {
// 	char	*c;
//
// 	c = ft_strjoin("hello ", "world");
// 	printf("%s\n", c);
// 	free(c);
// 	return (0);
// }
