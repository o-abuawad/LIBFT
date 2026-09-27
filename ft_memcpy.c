/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:16:50 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/24 13:47:03 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char dest[] = "yasdssdsaad";
// 	char src[5] = "osan";
// 	char *c;
// 	char *r;
//
// 	c = memcpy(dest,src,6);
// 	printf("%s\n", c);
// 	r = ft_memcpy(dest,src,6);
// 	printf("%s\n", r);
// }
