/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:27:45 by adak              #+#    #+#             */
/*   Updated: 2026/01/18 17:01:40 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// #include "libft.h"
// #include <stdio.h>

// void	to_upper(unsigned int i, char *c)
// {
// 	(void)i;  // index kullanılmıyor
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// }

// int main(void)
// {
// 	char str1[] = "merhaba";

// 	printf("Original: %s\n", str1);
// 	ft_striteri(str1, &to_upper);
// 	printf("After to_upper: %s\n\n", str1);

// 	return (0);
// }