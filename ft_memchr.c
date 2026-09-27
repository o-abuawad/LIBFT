/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 01:23:27 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/26 14:43:53 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	target;
	size_t			i;

	i = 0;
	src = (unsigned char *)s;
	target = (unsigned char )c;
	while (i < n)
	{
		if (src[i] == target)
			return (&src[i]);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*c;
// 	char	*r;
// 	char	src[] = "thisisjustatest";
//
// 	c = ft_memchr(src, 'j', 7);
// 	r = memchr(src, 'j', 7);
// 	printf("%s\n", r);
// 	printf("%s\n", c);
// 	return (0);
// }
