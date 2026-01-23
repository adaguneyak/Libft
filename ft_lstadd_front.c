/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:17:20 by adak              #+#    #+#             */
/*   Updated: 2026/01/21 14:17:20 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new || !lst)
		return ;
	new->next = *lst;
	*lst = new;
}
// #include <stdio.h>
// int main (void)
// {
// 	char lou[] = "merhaba";
// 	char ada[] = "nasilsiniz";
// 	t_list *place;
// 	t_list *place2;
// 	place = ft_lstnew(lou);
// 	place2 = ft_lstnew(ada);
// 	printf("%s\n", (char *)place->content);
// 	printf("%s\n", (char *)place2->content);
// 	ft_lstadd_front(&place2,place);
// 	printf("%s\n",(char *)place->content);
// 	printf("%s\n", (char *)place->next->content);
// }
