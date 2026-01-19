/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/18 16:01:04 by adak              #+#    #+#             */
/*   Updated: 2026/01/18 16:05:39 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

// #include <fcntl.h>
// int main(void)
// {
// 	int fd;
// 	fd = open("deneme2.txt", O_CREAT | O_WRONLY, 777 );
// 	ft_putstr_fd("merhaba",fd);
// 	close(fd);
// }