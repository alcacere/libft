/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 00:11:45 by alcacere          #+#    #+#             */
/*   Updated: 2026/02/15 19:39:51 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*new_str;
	size_t	total_len;

	if (!s1 || !s2)
		return (NULL);
	total_len = ft_strlen(s1) + ft_strlen(s2);
	new_str = (char *)malloc((total_len + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (*s1)
	{
		*new_str = *s1;
		new_str++;
		s1++;
	}
	while (*s2)
	{
		*new_str = *s2;
		new_str++;
		s2++;
	}
	return (*new_str = '\0', new_str - total_len);
}
