/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:01:29 by adak              #+#    #+#             */
/*   Updated: 2026/01/14 11:18:39 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (size > 0)
	{
		i = 0;
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srclen);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	src[] = "Hello World";
// 	char	dest[6];
// 	size_t	ret;

// 	ret = ft_strlcpy(dest, src, 6);
// 	printf("Kaynak: %s\n", src);
// 	printf("Hedef: %s\n", dest);
// 	printf("Return: %zu\n", ret);
// 	return (0);
// }
