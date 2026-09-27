/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:19:45 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/26 14:11:57 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;
	int				i;

	p = s;
	i = 0;
	while (n > 0)
	{
		p[i] = 0;
		i++;
		n--;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	char bz[] = "hello";
// 	char ftbz[] = "hello";
// 	size_t	i;
//
// 	i = 0;
// 	bzero(bz,2);
// 	ft_bzero(ftbz, 2);
// 	while (i < sizeof(bz))
// 	{
// 		printf("%c", bz[i]);
// 		i++;
// 	}
// 	printf("\nbz finished\n");
// 	i = 0;
// 	while (i < sizeof(ftbz))
// 	{
// 		printf("%c", ftbz[i]);
// 		i++;
// 	}
// }
