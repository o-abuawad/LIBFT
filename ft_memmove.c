/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:38:02 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/29 20:27:39 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	i = 0;
	if (d > s)
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	else
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
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
