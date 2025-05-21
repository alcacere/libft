/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:32:20 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/02 20:32:25 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
//int main()
//{
//	t_list	*lst = NULL;
//	t_list	*node1 = ft_lstnew(ft_strdup("hola 1"));
//	t_list	*node2 = ft_lstnew(ft_strdup("hola 1"));
//	t_list	*node3 = ft_lstnew(ft_strdup("hola 1"));
//	t_list	*node4 = ft_lstnew(ft_strdup("hola 1"));
//	
//	node1->next = node2;
//	node2->next = node3;
//	node3->next = node4;
//
//	lst = node1;
//
//	int	r = ft_lstsize(lst);
//	printf("%d\n", r);
//}
