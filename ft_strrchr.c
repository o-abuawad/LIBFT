/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 13:52:28 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/24 14:17:03 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != (char)c)
		i--;
	return ((char *)&s[i]);
}
// int main()
// {
// 	char str[] = "HelloWorld";
// 	// printf("%s\n", strrchr(str,'l'));
// 	printf("%s", ft_strrchr(str,'k'));
// }
