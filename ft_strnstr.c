/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:11:56 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/01 23:08:57 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	char	*b;
	char	*l;
	size_t	ln;

	if (*little == '\0')
		return ((char *)big);
	while (*big && len)
	{
		b = (char *)big;
		l = (char *)little;
		ln = len;
		while (*l && *b == *l && ln)
		{
			l++;
			b++;
			ln--;
		}
		if (!*l)
			return ((char *)big);
		big++;
		len--;
	}
	return (0);
}
//int main()
//{
//	char *s = "see FF your FF return FF now FF";
//	char *l = "FF";
//	int i = ft_strlen(s);
//	char *r = ft_strnstr(s, l, i);
//	printf("%s\n", r);
//}
