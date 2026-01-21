/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:33:54 by adak              #+#    #+#             */
/*   Updated: 2026/01/21 22:16:56 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nnode;

	nnode = malloc(sizeof(t_list));
	if (!nnode)
		return (NULL);
	nnode->content = content;
	nnode->next = NULL;
	return (nnode);
}

// #include <stdio.h>
// int main (void)
// {
// 	char lou[] = "bonjour";
// 	t_list	*ada;
// 	ada = ft_lstnew(lou);
// 	printf("%s",(char *) ada->content);
// 	free(ada);
// }