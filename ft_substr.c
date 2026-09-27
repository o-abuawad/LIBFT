/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:19:24 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/27 23:00:00 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	idptr;
	size_t	s_len;

	ptr = (char *)s;
	if (!s)
		return (NULL);
	if (len == 0 || start > len)
		return (NULL);
	ptr = malloc(len * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	idptr = 0;
	while (idptr < len)
	{
		ptr[idptr] = s[start + idptr];
		idptr++;
	}
	ptr[idptr] = '\0';
	return (ptr);
}
// int main()
// {
// 	char *c;
//
// 	c = ft_substr("helloWorld", 2, 5); // len = 8, start = 7
//
// 	printf("%s", c);
// 	free(c);
// 	return (0);
// }
