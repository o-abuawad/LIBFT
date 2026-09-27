/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabu-awa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 04:53:17 by oabu-awa          #+#    #+#             */
/*   Updated: 2026/09/27 18:56:19 by oabu-awa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	size_t	total_size;
	void	*ptr;

	total_size = n * size;
	if (n != 0 && total_size / n != size)
		return (NULL);
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, total_size);
	return (ptr);
}

// int main()
// {
//     int n = 5;
//     int *arr;
//
// 	arr = (int *)ft_calloc(n, sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     for (int i = 0; i < n; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]); 
//     }
// 	calloc(n, sizeof(int));
//     if (arr == NULL) {
//         printf("Memory allocation failed!\n");
//         return 1;
//     }
//     for (int i = 0; i < n; i++) {
//         printf("arr[%d] = %d\n", i, arr[i]); 
//     }
//     free(arr);
//     return 0;
// }
