/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 22:06:40 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/02 00:09:47 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//char	f_toupper(unsigned int i, char c)
//{
//	if (c >= 'a' && c <= 'z')
//		return (c - 32);
//	return (c);
//}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*maped_ptr;
	char			*str;
	unsigned int	i;

	str = (char *)s;
	i = 0;
	maped_ptr = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (maped_ptr == NULL)
		return (NULL);
	while (str[i])
	{
		maped_ptr[i] = f(i, str[i]);
		i++;
	}
	maped_ptr[i] = '\0';
	return (maped_ptr);
}
//int main()
//{
//	char *s = "hola que tal";
//	char *r = ft_strmapi(s, f_toupper);
//	printf("%s\n", r);
//}
