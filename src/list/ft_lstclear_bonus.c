/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:52:55 by alcacere          #+#    #+#             */
/*   Updated: 2026/02/15 09:46:10 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*prev;

	while (*lst != NULL)
	{
		prev = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = prev;
	}
}
//
//int main()
//{
//	t_list	*node1 = ft_lstnew(ft_strdup("hola1"));
//	t_list	*node2 = ft_lstnew(ft_strdup("hola2"));
//	t_list	*node3 = ft_lstnew(ft_strdup("hola3"));
//	t_list	*lst = node1;
//
//	node1->next = node2;
//	node2->next = node3;
//
//	for(int i = 0; lst != NULL; i++)
//	{
//		printf("%s\n", (char *)lst->content);
//		lst = lst->next;
//	}
//	lst = node1;
//	ft_lstclear(&lst, free);
//}
