/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 12:48:22 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/26 20:58:30 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int		word_count(const char *s, char c)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*s)
	{
		if (*s != c && !is_word)
		{
			count++;
			is_word = 1;
		}
		if (*s == c && is_word)
			is_word = 0;
		s++;
	}
	return (count);
}

static size_t	word_len(const char *s, char c)
{
	size_t len;

	len = 0;
	while (s[len] != c && s[len])
	{
		len++;
	}
	return (len);
}

static char		*next_word(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return ((char *)s);
}

char			**ft_strsplit(const char *s, char c)
{
	char	**table;
	int		word_number;
	int		i;

	word_number = word_count(s, c);
	if (!s || !(table = (char **)malloc(sizeof(char *) * (word_number + 1))))
		return (NULL);
	i = 0;
	while (i < word_number)
	{
		s = next_word(s, c);
		if (!(table[i] = (char *)malloc(sizeof(char) * (word_len(s, c) + 1))))
			return (NULL);
		table[i] = ft_strsub(s, 0, word_len(s, c));
		s += word_len(s, c);
		i++;
	}
	table[i] = NULL;
	return (table);
}
