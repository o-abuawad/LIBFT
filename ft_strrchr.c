/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:52:28 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/27 14:18:44 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != (char)c && i > 0)
		i--;
	if (s[i] != (char)c)
		return (NULL);
	return ((char *) s + i);
}

// int main()
// {
// 	char str[] = "Hello World";
// 	char	*c;
// 	// printf("%s\n", ft_strrchr(str,'\0'));
// 	c = strrchr(str, '\0');
// 	c -= 2;
// 	printf("%s", c);
// }
