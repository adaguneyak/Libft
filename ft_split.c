/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 12:24:09 by adak              #+#    #+#             */
/*   Updated: 2026/01/25 17:48:55 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countword(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] == c && s[i])
				i++;
		}
		if (s[i] != c && s[i])
		{
			nb++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (nb);
}

static char	*ft_strldup(char const *s, char c)
{
	char	*str;
	int		i;
	int		len;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	len = i;
	i = 0;
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

static char	**freetab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (tab[i])
			free (tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;

	tab = malloc(sizeof(char *) * (countword(s, c) + 1));
	if (!tab)
		return (NULL);
	i = 0;
	j = 0;
	while (s[j])
	{
		while (s[j] == c && s[j])
			j++;
		if (s[j] != c && s[j])
		{
			tab[i] = ft_strldup(s + j, c);
			if (!tab[i++])
				return (freetab(tab));
			while (s[j] != c && s[j])
				j++;
		}
	}
	tab[i] = NULL;
	return (tab);
}

// #include <stdio.h>
// int main(void)
// {
// 	char **rest;
// 	char str[] = "          yeter artik husey     in pesimi bi    rak " ;
// 	int i = 0;
// 	rest = ft_split(str,' ');
// 	rest[7]  = NULL;
// 	while (rest[i])
// 		{
// 			printf("%s\n",rest[i]);
// 			i++;
// 		}
// 	freetab(rest);
// }