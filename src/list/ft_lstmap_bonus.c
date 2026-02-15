/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 13:00:46 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/04 20:49:05 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//void	*f_toupper(void *content)
//{
//	int i = 0;
//	char *str = ft_strdup((char *)content);
//	if (!str)
//		return(NULL);
//	while (str[i] && str[i] >= 'a' && str[i] <= 'z')
//	{
//		str[i] = str[i] - 32;
//		i++;
//	}
//	return ((void *)str);
//}
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	t_list	*tmp_lst;
	void	*f_content;

	if (!lst || !f)
		return (NULL);
	new_lst = NULL;
	tmp_lst = lst;
	while (tmp_lst != NULL)
	{
		f_content = f(tmp_lst->content);
		if (!f_content)
			return (ft_lstclear(&new_lst, del), NULL);
		new_node = ft_lstnew(f_content);
		if (!new_node)
		{
			del(f_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		tmp_lst = tmp_lst->next;
	}
	return (new_lst);
}
/*
#include <stdio.h>
int main()
{
	t_list	*node1 = ft_lstnew(ft_strdup("hola1"));
	t_list	*node2 = ft_lstnew(ft_strdup("hola2"));
	t_list	*node3 = ft_lstnew(ft_strdup("hola3"));
	t_list	*lst = node1;
	node1->next = node2;
	node2->next = node3;
	//t_list	*new_lst = ft_lstmap(lst, f_toupper, free);
	t_list	*new_lst = ft_lstmap(lst, f_toupper, NULL);
	t_list	*nl_tmp = new_lst;
	while (nl_tmp != NULL)
	{
		printf("%s\n", (char *)nl_tmp->content);
		nl_tmp = nl_tmp->next;
	}
	ft_lstclear(&new_lst, free);
	ft_lstclear(&lst, free);
}
*/
