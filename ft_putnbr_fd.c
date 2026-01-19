/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 17:08:54 by adak              #+#    #+#             */
/*   Updated: 2026/01/19 12:23:47 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write (fd, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n <= 9)
		ft_putchar_fd(n + 48, fd);
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
}

// #include <fcntl.h>
// int main (void)
// {
// 	int fd;
// 	fd = open("deneme.txt", O_CREAT | O_WRONLY , 777);
// 	ft_putnbr_fd(42,fd);
// 	ft_putchar_fd('\n',fd);
// 	ft_putnbr_fd(0,fd);
// 	ft_putchar_fd('\n',fd);
// 	ft_putnbr_fd(-42,fd);
// 	close(fd);
// }
