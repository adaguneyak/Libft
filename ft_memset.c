/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:58:48 by adak              #+#    #+#             */
/*   Updated: 2026/01/05 12:58:48 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	ch;
	size_t			i;

	p = (unsigned char *)s;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		p[i] = ch;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int main(void)
// {
// 	int str;
// 	ft_memset(&str,255,4);
// 	ft_memset(&str,255,3);
// 	ft_memset(&str,253,2);
// 	ft_memset(&str,87568,1);
// 	printf("%d",str);
// }