/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 22:36:24 by alcacere          #+#    #+#             */
/*   Updated: 2026/01/14 10:31:26 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "ft_string.h"

static int	set_check(char *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*start;
	char	*end;

	if (!s1)
		return (NULL);
	start = (char *)s1;
	end = (char *)s1 + ft_strlen(s1);
	while (*start && set_check((char *)set, *start))
		start++;
	while (end >= s1 && set_check((char *)set, *end))
		end--;
	return (ft_substr(start, 0, end - start));
}

//int main()
//{
//	char *str = "    fjwijg   fwqe  wqeffew    ";
//	char *res = ft_strtrim(str, " wfej");
//	printf("%s\n", res);
//}
