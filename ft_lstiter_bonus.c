/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 22:09:48 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/02 22:09:52 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//void	f_toupper(void *content)
//{
//	char *str = (char *)content;
//	while (*str)
//	{
//		if (*str >= 'a' && *str <= 'z')
//			*str = *str - 32;
//		str++;
//	}
//}
//
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = lst;
	while (tmp != NULL)
	{
		f(tmp->content);
		tmp = tmp->next;
	}
}
//int main ()
//{
//	t_list	*lst = NULL;
//
//	t_list	*node1 = ft_lstnew(ft_strdup("hola1"));
//	t_list	*node2 = ft_lstnew(ft_strdup("hola2"));
//	t_list	*node3 = ft_lstnew(ft_strdup("hola3"));
//
//	node1->next = node2;
//	node2->next = node3;
//	lst = node1;
//	ft_lstiter(lst, f_toupper);
//	while (lst != NULL)
//	{
//		printf("%s\n", (char *)lst->content);
//		lst = lst->next;
//	}
//}
