/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 22:46:21 by alcacere          #+#    #+#             */
/*   Updated: 2025/04/30 22:46:25 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//void	f_tolower(unsigned int i, char *c)
//{
//	if (*c >= 'A' && *c <= 'Z')
//		*c += 32;
//}

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
//int main()
//{
//	char s[] = "HOLA QUE TAL";
//	ft_striteri(s, f_tolower);
//	printf("%s\n", s);
//}
