/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lastlast.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:37:17 by adak              #+#    #+#             */
/*   Updated: 2026/01/21 19:37:17 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*temp;

	temp = lst;
	if (lst == NULL)
		return (NULL);
	while (temp->next)
	{
		temp = temp->next;
	}
	return (temp);
}
// #include <stdio.h>
// int main (void)
// {
// 	t_list *node;
// 	char lou[] = "merhaba";
// 	char ada[] = "selam";
// 	char borix[] = "naber";
// 	char kevin[] = "spiderman";
// 	char vav[] = "hoscakal";
// 	node = ft_lstnew(lou);
// 	printf("%s\n",(char *) node->content);
// 	ft_lstadd_front(&node,ft_lstnew(ada));
// 	ft_lstadd_front(&node,ft_lstnew(borix));
// 	ft_lstadd_front(&node,ft_lstnew(kevin));
// 	ft_lstadd_front(&node,ft_lstnew(vav));
// 	printf("%s",(char *)ft_lstlast(node)->content);
// }