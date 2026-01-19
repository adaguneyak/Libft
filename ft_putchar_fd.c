/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 15:32:31 by adak              #+#    #+#             */
/*   Updated: 2026/01/19 12:22:05 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

// #include <fcntl.h>
// int main(void)
// {
// 	int fd;
// 	fd = open("deneme.txt",O_CREAT | O_WRONLY, 777);
// 	ft_putchar_fd('k',fd);

// 	close(fd);
// }