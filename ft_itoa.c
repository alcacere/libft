/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 22:28:05 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/04 22:15:13 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_digits(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static char	*fill_reverse(char *n_str, int dig, int n)
{
	n_str[0] = '-';
	n_str[dig] = '\0';
	while (n)
	{
		n_str[dig -1] = n % 10 + '0';
		n /= 10;
		dig--;
	}
	return (n_str);
}

char	*ft_itoa(int n)
{
	int		dig;
	char	*n_str;

	dig = 0;
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		n *= -1;
		dig = 1;
	}
	dig += count_digits(n);
	n_str = (char *) malloc((dig + 1) * sizeof(char));
	if (!n_str)
		return (0);
	return (fill_reverse(n_str, dig, n));
}
//#include <stdio.h>
//int main ()
//{
//	int i = 100;
//	char *n = ft_itoa(i);
//	printf("%s\n", n);
//}
