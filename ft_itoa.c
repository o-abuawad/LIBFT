/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 15:49:22 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/29 16:37:09 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	counter(int n)
{
	long	i;
	bool	c;

	i = 0;
	c = false;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		n *= -1;
		c = true;
	}
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	if (c == true)
		return (i + 1);
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;
	long	num;

	len = counter(n);
	num = n;
	if (num == 0)
		str = "0";
	str = malloc(len + 1);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		len--;
		str[len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}

int	main(void)
{
	char	*c;

	c = ft_itoa(48);
	printf("%s\n", c);
}
