/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:58:15 by adak              #+#    #+#             */
/*   Updated: 2026/01/05 12:58:15 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d\n", ft_isascii('k'));
// 	printf("%d\n", ft_isascii('7'));
// 	printf("%d\n", ft_isascii(48));
// 	printf("%d\n", ft_isascii(128));
// 	printf("%d\n", ft_isascii(';'));
// 	printf("%d\n", ft_isascii('#'));
// }