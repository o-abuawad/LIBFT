/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:49:22 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/10/07 18:31:57 by zeru             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	counter(int n)
{
	long	i;
	long	num;

	i = 0;
	num = n;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		i++;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		i++;
	}
	return (i);
}

static void	checker(char *ptr, int l, long n)
{
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		l--;
		ptr[l] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	num;

	len = counter(n);
	num = n;
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	checker(str, len, num);
	return (str);
}

// int	main(void)
// {
// 	char	*c;
//
// 	c = ft_itoa(1234);
// 	printf("%s\n", c);
// }
