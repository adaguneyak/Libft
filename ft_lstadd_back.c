/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:16:44 by adak              #+#    #+#             */
/*   Updated: 2026/01/21 20:16:44 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst;
	if (!lst)
		return ;
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
}

// #include <stdio.h>
// int main(void)
// {
// 	char lou[] = "merhaba";
// 	char ada[] = "naber";
// 	char boris[] = "good";
// 	char vian[] = "nasilsin";
// 	char lepain[] ="bitsinbucile"; 

// 	t_list	*node;

// 	node = ft_lstnew(lou);
// 	ft_lstadd_front(&node,ft_lstnew(ada));
// 	ft_lstadd_front(&node,ft_lstnew(boris));
// 	ft_lstadd_front(&node,ft_lstnew(vian));
// 	ft_lstadd_back(&node,ft_lstnew(lepain));
// 	printf("%s", (char *)ft_lstlast(node)->content);
// 	free(node);
// }