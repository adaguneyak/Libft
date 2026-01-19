/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 14:17:55 by adak              #+#    #+#             */
/*   Updated: 2026/01/18 17:01:01 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*result;

	i = 0;
	if (!s || !f)
		return (NULL);
	result = malloc(sizeof (char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>

// // Örnek fonksiyon 1: Her karakteri büyük harfe çevirir
// char to_upper(unsigned int i, char c)
// {
//     (void)i; // index kullanmıyoruz
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return (c);
// }
// int main(void)
// {
//     char *original = "hello world";
//     char *result;

//     printf("Original: %s\n", original);

//     // Test 1: Büyük harfe çevirme
//     result = ft_strmapi(original, to_upper);
//     printf("To Upper: %s\n", result);
//     free(result);
//     return (0);
// }