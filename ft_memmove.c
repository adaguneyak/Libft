/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:57:14 by adak              #+#    #+#             */
/*   Updated: 2026/01/05 12:57:14 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	if (d > s)
	{
		while (n > 0)
		{
			n--;
			d[n] = s[n];
		}
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int main (void)
// {
// 	char dest[] = "helloworld";
// 	char src[] = " ";
// 	printf("before orjinal memmove : %s\n", dest);
// 	memmove(dest,src,3);
// 	printf("%d\n", dest[0]);
// 	printf("after orjinal memmove : %s\n", dest);
// 	char dest1[] = "helloworld";
// 	char src1[] = " ";
// 	printf("before bizim memmove : %s\n", dest1);
// 	ft_memmove(dest1,src1,3);
// 	printf("after bizim memmove : %s\n", dest1);
// }
