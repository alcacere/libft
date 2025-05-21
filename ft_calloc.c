/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 15:32:25 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/01 14:10:41 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t cont, size_t size)
{
	char	*c;

	c = (char *)malloc(cont * size);
	if (c == NULL)
		return (NULL);
	ft_bzero(c, cont * size);
	return (c);
}
