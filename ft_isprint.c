/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:58:30 by adak              #+#    #+#             */
/*   Updated: 2026/01/05 12:58:30 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_isprint(' '));
// 	printf("%d\n", ft_isprint('k'));
// 	printf("%d\n", ft_isprint(127));
// 	printf("%d\n", ft_isprint(5));
// 	printf("%d\n", ft_isprint(';'));
// 	printf("%d\n", ft_isprint('&'));
// 	printf("%d\n", ft_isprint('4'));
// }
