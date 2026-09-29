/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 20:32:55 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/29 20:33:12 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}

// int main()
// {
// 	char dest[] = "yasdssdsaad";
// 	char src[5] = "osan";
// 	char *c;
// 	char *r;
//
// 	c = memmove(dest,src,3);
// 	printf("%s\n", c);
// 	r = ft_memmove(dest,src,3);
// 	printf("%s\n", r);
// }
