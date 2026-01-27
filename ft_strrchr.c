/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 14:48:03 by adak              #+#    #+#             */
/*   Updated: 2026/01/27 17:53:27 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	ch;
	char			*find;
	int				i;

	ch = (unsigned char)c;
	find = NULL;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == ch)
			find = (char *)(s + i);
		i++;
	}
	if ((unsigned char)s[i] == ch)
		find = (char *)(s + i);
	return (find);
}
