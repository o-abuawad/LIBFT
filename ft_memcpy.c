/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 10:16:50 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/29 12:18:00 by oabu-awa         ###   ########.fr       */
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
	if (n == 0 || src == dest)
		return (d);
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (d);
}
// int main()
// {
// 	int src[6] = {1,511,3,4,5};
// 	int dst[6] = {6,7,8,9,9};
// 	int	*r;
// 	int	i;
//
// 	i = 0;
// 	r = ft_memcpy(dst, src, 5);
// 	while (i < 5)
// 	{
// 		printf("%d\n", r[i]);
// 		i++;
// 	}
// }
