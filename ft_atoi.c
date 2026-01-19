/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:25:11 by adak              #+#    #+#             */
/*   Updated: 2026/01/19 20:26:05 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	result;
	int	minus;
	int	i;

	i = 0;
	result = 0;
	minus = 1;
	while (nptr[i] <= 32)
		i++;
	if (nptr[i] == '-')
	{
		minus = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - 48;
		i++;
	}
	return (result * minus);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
// 	// printf("orjinal atoi : %d\n", atoi("42"));
// 	// printf("benim atoi %d\n", ft_atoi("42"));
// 	// printf("orjinal atoi : %d\n", atoi("hello"));
// 	// printf("benim atoi %d\n", ft_atoi("hello"));
// 	// printf("orjinal atoi : %d\n", atoi("-42"));
// 	// printf("benim atoi %d\n", ft_atoi("-42"));
// 	// printf("orjinal atoi : %d\n", atoi("--123"));
// 	// printf("benim atoi %d\n", ft_atoi("--123"));
// }