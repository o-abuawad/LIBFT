/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealshama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/28 07:54:24 by ealshama          #+#    #+#             */
/*   Updated: 2026/09/28 08:49:23 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
    char	*ptr;
    size_t	i;
    size_t	s_len;


    if (!s)
	    return (0);
    s_len = ft_strlen((char*)s);
    if (start >= s_len)
    {
	ptr = malloc(1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
    }
    if (len > s_len - start)
	    len = s_len - start;
    ptr = malloc(len + 1);
    if (!ptr)
        return (NULL);
    i = 0;
    while (i < len)
    {
        ptr[i] = (char)s[start + i];
        i++;
    }
    ptr[i] = '\0';
    return (ptr);
}
// int	main()
// {
//     char	*c;
//
//     c = ft_substr("helloWorld", 2, 12);
//     printf("%s", c);
//     free(c);
//     return (0);
// }
