/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:44:24 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/03 13:59:09 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*tmp;
	t_list	*last;

	if (!lst)
		return (NULL);
	tmp = lst;
	while (tmp != NULL)
	{
		last = tmp;
		tmp = tmp->next;
	}
	return (last);
}
//
//int main()
//{
//	t_list	*lst = NULL;
//	t_list	*node1 = ft_lstnew(ft_strdup("hola"));
//	t_list	*node2 = ft_lstnew(ft_strdup("hola"));
//	t_list	*node3 = ft_lstnew(ft_strdup("hola"));
//	t_list	*node4 = ft_lstnew(ft_strdup("hola last"));
//
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//	lst = node1;
//	t_list	*last = ft_lstlast(lst);
//	printf("%s\n", (char *)last->content);
//}
