/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 11:12:55 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/26 14:38:17 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = (unsigned char)c;
		p++;
		n--;
	}
	return (s);
}

// int main()
// {
// 	char str[] = "osama";
// 	memset(str,'X',3);
// 	// ft_memset(str, 'X', 3);
// 	printf("%s\n", str);
// }
