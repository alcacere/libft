/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 01:22:07 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/03 22:21:41 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	value;

	ptr = s;
	value = (unsigned char)c;
	while (n--)
		*ptr++ = value;
	return (s);
}
//int main ()
//{
//        int *arr = (int *)malloc(sizeof(int) * 10);
//        ft_memset(arr, 0, sizeof(arr));
//        //memset(arr, 0, sizeof(int) * 10);
//        for (int i = 0; i < 10; i++)
//        {
//                printf("%i\n", arr[i]);
//        }
//        free(arr);
//}
