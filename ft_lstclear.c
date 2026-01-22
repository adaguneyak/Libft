/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 21:36:44 by adak              #+#    #+#             */
/*   Updated: 2026/01/21 21:36:44 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	temp = *lst;
	if (!lst || !del)
		return ;
	while (lst && *lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}

// #include <stdio.h>
// int main (void)
// {
// 	t_list	*node;
// 	char *ada;
// 	char *lou;
// 	char *huseyin;
// 	char *bojack;

// 	ada = ft_strdup("merhaba");
// 	lou = ft_strdup("naber");
// 	huseyin = ft_strdup("x");
// 	bojack = ft_strdup("harika");

// 	node = ft_lstnew(ada);

// 	ft_lstadd_back(&node,ft_lstnew(lou));
// 	ft_lstadd_back(&node,ft_lstnew(huseyin));
// 	ft_lstadd_back(&node,ft_lstnew(bojack));

// 	ft_lstclear(&node,&free);
// 	if (node == NULL)
// 		printf("fonksiyon calisiyor");
// }