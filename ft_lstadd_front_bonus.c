/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 20:21:23 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/03 13:54:59 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	new->next = *lst;
	*lst = new;
}
//
//int main ()
//{
//	t_list *lst = NULL;
//	char *s1 = ft_strdup("hola1");
//	char *s2 = ft_strdup("hola2");
//	char *s3 = ft_strdup("hola3");
//
//	t_list	*node1 = ft_lstnew(s1);
//	t_list	*node2 = ft_lstnew(s2);
//	t_list	*node3 = ft_lstnew(s3);
//
//	ft_lstadd_front(&lst, node1);
//	ft_lstadd_front(&lst, node2);
//	ft_lstadd_front(&lst, node3);
//	while (lst != NULL)
//	{
//		printf("%s\n", (char *)lst->content);
//		lst = lst->next; 
//	}
//}
