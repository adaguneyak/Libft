/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:57:57 by adak              #+#    #+#             */
/*   Updated: 2026/01/05 12:57:57 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

// #include <stdio.h>
// int main (void)
// {
// 	printf("%d\n",ft_isalnum('K'));
// 	printf("%d\n",ft_isalnum('"'));
// 	printf("%d\n",ft_isalnum('5'));
// 	printf("%d\n",ft_isalnum(97));
// 	printf("%d\n",ft_isalnum(';'));
// }