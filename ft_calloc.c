/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 17:06:49 by adak              #+#    #+#             */
/*   Updated: 2026/01/26 11:09:20 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	len;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	len = nmemb * size;
	ptr = malloc(len);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, len);
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *a;
// 	size_t b = 7;
// 	a = (char *)ft_calloc(b, sizeof(char));
// 	while (b)
// 	{
// 		printf("%d\n",a[b]);
// 		b--;
// 	}	
// 	free(a);
// }