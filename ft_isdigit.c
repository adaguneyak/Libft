/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:58:23 by adak              #+#    #+#             */
/*   Updated: 2026/01/05 12:58:23 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%d\n", ft_isdigit('a'));
// 	printf("%d\n", ft_isdigit(' '));
// 	printf("%d\n", ft_isdigit('1'));
// 	printf("%d\n", ft_isdigit(97));
// 	printf("%d\n", ft_isdigit(':'));
// }