/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:02:58 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/03 00:53:06 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = *lst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}
//
//int main ()
//{
//	t_list	*lst = NULL;
//	t_list	*node1 = ft_lstnew(ft_strdup("hola1"));
//	t_list	*node2 = ft_lstnew(ft_strdup("hola2"));
//      	t_list	*node3 = ft_lstnew(ft_strdup("hola3"));
//      	t_list	*node4 = ft_lstnew(ft_strdup("hola3"));
//      	t_list	*node5 = ft_lstnew(ft_strdup("hola3"));
//	node1->next = node2;
//	lst = node1;
//      	ft_lstadd_back(&lst, node3);
//      	ft_lstadd_back(&lst, node4);
//      	ft_lstadd_back(&lst, node5);
//	//t_list	*last = ft_lstlast(lst);
//	while (lst != NULL)
//	{
//		printf("%s\n", (char *)lst->content);
//		lst = lst->next;
//	}
//}
