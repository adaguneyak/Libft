/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 10:25:11 by adak              #+#    #+#             */
/*   Updated: 2026/01/25 15:53:54 by adak             ###   ########.fr       */
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
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
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
// 	printf("orjinal atoi : %d\n", atoi("\206 135"));
// 	printf("benim atoi : %d\n", ft_atoi("\206 135"));
// // 	printf("orjinal atoi : %d\n", atoi("hello"));
// // 	printf("benim atoi %d\n", ft_atoi("hello"));
// // 	printf("orjinal atoi : %d\n", atoi("-42"));
// // 	printf("benim atoi %d\n", ft_atoi("-42"));
// // 	printf("orjinal atoi : %d\n", atoi("--123"));
// // 	printf("benim atoi %d\n", ft_atoi("--123"));
// }