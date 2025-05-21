/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 22:23:10 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/03 22:23:14 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	char	*s_ptr;
	size_t	i;

	result = (char *)malloc(ft_strlen(s) + 1);
	if (result == NULL)
		return (NULL);
	s_ptr = (char *)s;
	i = 0;
	while (s_ptr[i] != '\0')
	{
		result[i] = s_ptr[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
//int main ()
//{
//	char *s = "hola qque tal";
//	char *r = ft_strdup(s);
//	printf("%s\n", r);
//}
