/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:13:55 by alcacere          #+#    #+#             */
/*   Updated: 2025/05/04 18:15:10 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	cont_w(char *s, char c)
{
	int	cont;
	int	i;
	int	flag;

	cont = 0;
	i = 0;
	flag = 1;
	while (s[i])
	{
		if (s[i] != c && flag == 1)
		{
			cont += 1;
			flag = 0;
		}
		if (s[i] == c)
			flag = 1;
		i++;
	}
	return (cont);
}

static void	free_arr(char **arr)
{
	int	i;

	i = 0;
	while (arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	**alloc_arr(char **arr, char const *s, char c)
{
	char	*tmp_s;
	char	**tmp_arr;

	tmp_arr = arr;
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		tmp_s = (char *)s;
		while (*tmp_s != '\0' && *tmp_s != c)
			tmp_s++;
		if (*tmp_s == c || tmp_s > s)
		{
			*tmp_arr = ft_substr(s, 0, tmp_s - s);
			if (*tmp_arr == NULL)
			{
				free_arr(arr);
				return (NULL);
			}
			s = tmp_s;
			tmp_arr++;
		}
	}
	*tmp_arr = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;

	if (s == NULL)
		return (NULL);
	arr = malloc(sizeof(char *) * (cont_w((char *)s, c) + 1));
	if (arr == NULL)
		return (NULL);
	if (alloc_arr(arr, s, c) == NULL)
		return (NULL);
	return (arr);
}
//#include <stdio.h>
//int main ()
//{
//	//char *s = "hola! como estas !!";
//	//char c = ' ';
//	char **r = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
//	if (r == NULL)
//		return (printf("null:"), 0);
//	int i = 0;
//	while (r[i] != NULL)
//	{
//		printf("%s\n", r[i]);
//		free(r[i]);
//		i++;
//	}
//	free(r);
//}
