/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 20:51:46 by adak              #+#    #+#             */
/*   Updated: 2026/01/21 20:51:46 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

// #include <stdio.h>
// int main (void)
// {
// 	t_list *YETER;
// 	char *lou = ft_strdup("merhaba");
// 	YETER = ft_lstnew(lou);
// 	ft_lstdelone(YETER,&free);
// 	printf("%s", lou);
// }