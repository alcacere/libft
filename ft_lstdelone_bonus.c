/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 21:20:15 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/02 21:20:21 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
//int main()
//{
//	t_list	*lst = NULL;
//	t_list	*node1 = ft_lstnew(ft_strdup("hola"));
//	lst = node1;
//	printf("%s\n", (char *)lst->content);
//	ft_lstdelone(lst, free);
//}
