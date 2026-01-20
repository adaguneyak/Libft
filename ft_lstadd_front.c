/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adak <adak@student.42istanbul.com.tr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 17:53:58 by adak              #+#    #+#             */
/*   Updated: 2026/01/20 18:57:57 by adak             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;
	temp = new;
	temp->next = *lst;
	lst = &temp;
}

#include <stdio.h>

int main(void) {

	int a = 1;
	int b = 2;

	t_list *list = ft_lstnew(&a);
	t_list *new = ft_lstnew(&b);
	

	ft_lstadd_front(&list, new);
	printf("%d\n", *(unsigned char *)(list->content));
}