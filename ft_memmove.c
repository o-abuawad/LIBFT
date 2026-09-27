/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:38:02 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/24 20:35:18 by oabu-awa         ###   ########.fr       */
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
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
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
// 	c = memmove(dest,src,6);
// 	printf("%s\n", c);
// 	r = ft_memmove(dest,src,6);
// 	printf("%s\n", r);
// }

// int	main(void)
// {
// 	char	expected[] = "";
// 	char	actual[]= "";
// 	char	cpy[]      = "";
//
// 	// Overlap scenario: dest > src
// 	// Copy 5 bytes ('1','2','3','4','5') starting from index 0 to index 2
// 	memmove(expected + 2, expected, 5);
// 	ft_memmove(actual + 2, actual, 5);
// 	memcpy(cpy + 2, cpy, 5); // Undefined Behavior in standard C
//
// 	printf("memmove (Expected) : %s\n", expected);
// 	printf("ft_memmove (Yours) : %s\n", actual);
// 	printf("memcpy (UB)        : %s\n", cpy);
//
// 	return (0);
// }
