/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 08:39:58 by adak              #+#    #+#             */
/*   Updated: 2026/01/18 13:06:18 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	totallen;

	if (!s)
		return (NULL);
	totallen = ft_strlen(s);
	if (start >= totallen)
		return (ft_strdup(""));
	if (len > totallen - start)
		len = totallen - start;
	result = malloc(len + 1);
	if (!result)
		return (NULL);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	char omer[] = "merhaba";
// 	char *a;
// 	printf("benimki : %s\n", a = ft_substr(omer,6,100));
// 	free(a);
// }