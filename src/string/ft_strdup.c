/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 22:23:10 by alcacere          #+#    #+#             */
/*   Updated: 2026/01/14 10:30:13 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_string.h"

char	*ft_strdup(const char *s)
{
	char	*result;
	size_t	len;

	len = ft_strlen(s);
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	while (*s)
	{
		*result = *(char *)s;
		result++;
		s++;
	}
	*result = '\0';
	return (result - len);
}
//int main ()
//{
//	char *s = "hola qque tal";
//	char *r = ft_strdup(s);
//	printf("%s\n", r);
//}
