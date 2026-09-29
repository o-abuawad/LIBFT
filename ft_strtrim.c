/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 09:40:15 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/29 11:23:31 by oabu-awa         ###   ########.fr       */
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

static char	*trim(char *t, char const *s, size_t st, size_t en)
{
	size_t	i;

	i = 0;
	while (st < en)
	{
		t[i] = s[st];
		i++;
		st++;
	}
	t[i] = '\0';
	return (t);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
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
	return (trim(trimmed, s1, start, end));
}

// int main()
// {
// 	char	*c;
//
// 	c = ft_strtrim("hellotabakazxc", "h");
// 	printf("%s\n", c);
// }
