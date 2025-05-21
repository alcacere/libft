/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:48:31 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/03 22:45:33 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_ptr;
	size_t	i;

	s_ptr = (char *)s;
	i = ft_strlen(s);
	if ((char)c == '\0')
		return (&s_ptr[i]);
	while (i--)
	{
		if (s_ptr[i] == (char)c)
			return (&s_ptr[i]);
	}
	return (NULL);
}
//int main ()
//{
//	char *s = "hola que tal";
//	char c = '\0';
//	char  *r = ft_strrchr(s, c);
//	printf("%s\n", r);
//}
