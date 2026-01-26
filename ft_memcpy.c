/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 12:58:36 by adak              #+#    #+#             */
/*   Updated: 2026/01/05 12:58:36 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *) dest;
	s = (unsigned char *) src;
	i = 0;
	if (n == 0)
		return (dest);
	if (s == NULL && d == NULL)
		return (NULL);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char d[] = "adaguneyak";
// 	char s[] = "";
// 	void *dest = d;
// 	void *src = s;
// 	printf("before memcpy : %s\n", d);
// 	ft_memcpy(dest,src,3);
// 	printf("after memcpy : %s\n", d);
//}

// #include <string.h>
// int main (void)
// {
// 	char dest[] = "adaguneyak";
// 	char src[] = "";
// 	printf("before memcpy : %s\n", dest);
// 	memcpy(&dest,&src,1);
// 	printf("before memcpy : %s\n", dest);
// }

// #include <stdio.h>
// int main(void)
// {
// 	char d[] = "ABCDEEE";
// 	char d2[] = "ABCDEEE";
// 	//char s[] = "12345";
// 	ft_memcpy(d + 3,d , 10);
// 	ft_memmove(d2 + 3,d2 , 10);
// 	printf("%s\n",d + 3);
// 	printf("%s",d2 + 3);
// }