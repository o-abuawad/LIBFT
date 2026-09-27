/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:44:58 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/22 13:56:07 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (NULL);
		s++;
	}
	return ((char *)s);
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char str[] = "Hello";
// 	printf("%s\n", strchr(str,101));
// 	printf("%s", ft_strchr(str,101));
// }
