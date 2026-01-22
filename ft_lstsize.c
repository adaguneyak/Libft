/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:55:41 by adak              #+#    #+#             */
/*   Updated: 2026/01/21 14:55:41 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*temp;

	i = 0;
	temp = lst;
	while (temp)
	{
		i++;
		temp = temp->next;
	}
	return (i);
}
// #include <stdio.h>
// int main(void)
// {
// 	t_list *place;
// 	char lou[] = "merhaba";
// 	char ada[] = "naber";
// 	char loux[] = "nasilsin";
// 	place = ft_lstnew(lou);
// 	ft_lstadd_front(&place,ft_lstnew(ada));
// 	printf("%d", ft_lstsize(place));
// }