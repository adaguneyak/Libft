/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 22:33:44 by adak              #+#    #+#             */
/*   Updated: 2026/01/15 13:08:39 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;
	unsigned int	i;

	ch = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == ch)
			return ((char *)(s + i));
		i++;
	}
	if ((unsigned char)s[i] == ch)
		return ((char *)(s + i));
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char str[] = "Hello World";
// 	printf("Orijinal: %s\n", strchr(str, 'o'));
// 	printf("Senin:    %s\n", ft_strchr(str, 'o'));
// 	return (0);
// }