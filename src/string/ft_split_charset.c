/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_charset.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alcacere <alcacere@student42madrid.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 20:13:55 by alcacere          #+#    #+#             */
/*   Updated: 2026/02/15 14:27:24 by alcacere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

static int	count_words(char *str, char *charset)
{
	int	n;
	int	flag;

	flag = 1;
	n = 0;
	while (*str)
	{
		if (flag == 1 && !is_in_set(*str, charset))
		{
			n++;
			flag = 0;
		}
		if (is_in_set(*str, charset))
			flag = 1;
		str++;
	}
	return (n);
}

static char	*get_word(char *start, char *end)
{
	char	*word;
	int		len;
	int		i;

	len = end - start;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	i = 0;
	while (i < len)
	{
		word[i] = start[i];
		i++;
	}
	word[len] = '\0';
	return (word);
}

char	**set_arr(char **split, char *str, char *charset)
{
	int		i;
	char	*tmp;

	i = 0;
	while (*str)
	{
		while (*str && is_in_set(*str, charset))
			str++;
		if (!*str)
			break ;
		tmp = str;
		while (*tmp && !is_in_set(*tmp, charset))
			tmp++;
		split[i] = get_word(str, tmp);
		if (!split[i])
			return (ft_free_arr(split), NULL);
		str = tmp;
		i++;
	}
	split[i] = NULL;
	return (split);
}

char	**ft_split_charset(char *str, char *charset)
{
	char	**split;

	if (!str || !charset)
		return (NULL);
	split = malloc(sizeof(char *) * (count_words(str, charset) + 1));
	if (!split)
		return (NULL);
	split = set_arr(split, str, charset);
	return (split);
}
