/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 13:19:35 by adak              #+#    #+#             */
/*   Updated: 2026/01/23 17:15:35 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*node;

	if (!lst || !f || !del)
		return (NULL);
	node = NULL;
	while (lst)
	{
		temp = ft_lstnew(f(lst->content));
		if (!temp)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		ft_lstadd_back(&node, temp);
		lst = lst->next;
	}
	return (node);
}
// #include <stdio.h>
// #include <stdlib.h>

// void *deneme(void *str)
// {
//     char *ctr;
//     char *yeni;
//     int i;
//     int len;

//     ctr = (char *)str;
//     len = 0;
//     while (ctr[len])
//         len++;
//     yeni = malloc(sizeof(char) * (len + 1));
//     if (!yeni)
//         return (NULL);
//     i = 0;
//     while (ctr[i])
//     {
//         yeni[i] = ctr[i] - 32;
//         i++;
//     }
//     yeni[i] = '\0';
//     return (yeni);
// }

// int main(void)
// {
//     t_list *alper;
//     t_list *ada;
//     t_list *temp;

//     char mahmut[] = "mahmutnerdesin";
//     char mehran[] = "merhaba";
//     char murtaza[] = "bonjour";
//     char bugra[] = "naber";
//     char suha[] = "nasilsin";

//     alper = ft_lstnew(mahmut);
//     ft_lstadd_back(&alper, ft_lstnew(mehran));
//     ft_lstadd_back(&alper, ft_lstnew(murtaza));
//     ft_lstadd_back(&alper, ft_lstnew(bugra));
//     ft_lstadd_back(&alper, ft_lstnew(suha));

//     ada = ft_lstmap(alper, deneme, free);

//     temp = ada;
//     while (temp)
//     {
//         printf("%s\n", (char *)temp->content);
//         temp = temp->next;
//     }

//     ft_lstclear(&ada, free);

//     return (0);
// }

//ESKI MAIN
// int main(void)
// {

// 	t_list	*alper;

// 	//char mahmut[] = "mahmutnerdesin";
// 	//char mehran[] = "merhaba";
// 	//char murtaza[] = "bonjour";
// 	//char bugra[] = "naber";
// 	//char suha[] = "nasilsin";

// 	alper =ft_lstnew(ft_strdup("mahmutnerdesin"));
// 	ft_lstadd_back(&alper,ft_lstnew(ft_strdup("merhaba")));
// 	ft_lstadd_back(&alper,ft_lstnew(ft_strdup("bonjour")));
// 	ft_lstadd_back(&alper,ft_lstnew(ft_strdup("naber")));
// 	ft_lstadd_back(&alper,ft_lstnew(ft_strdup("nasilsin")));

// 	//printf("%s\n", (char *)ft_lstlast(alper)->content);
// 	t_list *ada = ft_lstmap(alper, deneme, free);
// 	printf("%s\n", (char *)ada->content);

// 	// ada = alper;
// 	// while(ada)
// 	// {
// 	// 	printf("%s\n", (char *)ada->content);
// 	// 	ada = ada->next;
// 	// }

// 	//alper = ft_lstmap(alper,deneme,free);
// 	//printf("%s\n", (char *)ft_lstnew(alper)->content);

// }