/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:52:55 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/04 20:03:55 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;
	t_list	*prev;

	tmp = *lst;
	while (tmp != NULL)
	{
		prev = tmp->next;
		del(tmp->content);
		free(tmp);
		tmp = prev;
	}
	*lst = NULL;
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
