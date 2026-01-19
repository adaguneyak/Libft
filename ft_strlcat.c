/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 18:09:05 by adak              #+#    #+#             */
/*   Updated: 2026/01/11 15:16:18 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	dstlen = 0;
	while (dstlen < size && dst[dstlen])
		dstlen++;
	if (dstlen >= size)
		return (size + srclen);
	i = 0;
	while (src[i] && (dstlen + i) < size - 1)
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (dstlen + srclen);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dst[20] = "merhaba";
// 	char	src[] = "nasilsin";
// 	size_t	result;

// 	printf("%s\n", dst);
// 	result = ft_strlcat(dst, src, 4);
// 	printf("%s\n", dst);
// 	printf("%zu\n", result);
// 	return (0);
// }
