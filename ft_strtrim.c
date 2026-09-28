/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:40:15 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/28 13:17:38 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	end = 0;
	while (s1[end])
		end++;
	while (end > start && is_in_set(s1[end - 1], set))
		end--;
	trimmed = malloc(end - start + 1);
	if (!trimmed)
		return (NULL);
	i = 0;
	while (start < end)
	{
		trimmed[i] = s1[start];
		i++;
		start++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}
// int main()
// {
// 	char	*c;
//
// 	c = ft_strtrim("hellotabakazxc", "t a b a k a z x ch");
// 	printf("%s\n", c);
// }
