/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:19:52 by adak              #+#    #+#             */
/*   Updated: 2026/01/20 16:34:38 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_find(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	size_t	i;
	size_t	start;
	size_t	end;
	size_t	length;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_find(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_find(s1[end - 1], set))
		end--;
	length = end - start;
	result = malloc(sizeof (char) * (length + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < length)
		result[i++] = s1[start++];
	result[i] = '\0';
	return (result);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s1 = "          !!!!!!hello world";
// 	char *set = "";
// 	char *result;
// 	result = ft_strtrim(s1,set);
// 	printf("%s", result);
// 	free(result);
// }
