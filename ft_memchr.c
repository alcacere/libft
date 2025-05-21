/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 14:24:33 by alcacere          #+#    #+#             */
/*   Updated: 2025/04/30 14:24:40 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*s_ptr;
	size_t	i;

	s_ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		if (s_ptr[i] == (char)c)
			return (&s_ptr[i]);
		i++;
	}
	return (NULL);
}
//int main ()
//{
//	char *s = "hola que tal";
//	char c = 'a';
//	char *r = ft_memchr(s, c, 0);
//	printf("%s\n", r);
//}
