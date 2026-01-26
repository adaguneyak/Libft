/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 07:00:26 by adak              #+#    #+#             */
/*   Updated: 2026/01/26 11:06:56 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	intlen(int x)
{
	int	i;

	i = 0;
	if (x < 0)
		i++;
	while (x)
	{
		x = x / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		size;

	size = intlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	res = malloc(sizeof(char) * (size + 1));
	if (!res)
		return (NULL);
	res[size] = '\0';
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	size--;
	while (size >= 0 && (res[size] != '-'))
	{
		res[size] = (n % 10) + '0';
		n = n / 10;
		size--;
	}
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *tab;
// 	tab = ft_itoa(0);
// 	printf("%s", tab);
// 	free(tab);
// }