/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 18:14:24 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/24 18:49:27 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

static void	get_start_end(const char *s, int *start, int *end)
{
	*start = 0;
	while (is_whitespace(s[*start]))
		*start = *start + 1;
	*end = (int)ft_strlen(s) - 1;
	while (is_whitespace(s[*end]))
		*end = *end - 1;
}

char		*ft_strtrim(const char *s)
{
	char	*fresh;
	char	*aux;
	int		start;
	int		end;

	get_start_end(s, &start, &end);
	if (end <= start)
	{
		if (!(fresh = (char *)malloc(1)))
			return (NULL);
		*fresh = '\0';
		return (fresh);
	}
	if (!(fresh = (char *)malloc(end - start + 2)))
		return (NULL);
	aux = fresh;
	while (start <= end)
	{
		*fresh = s[start];
		fresh++;
		start++;
	}
	*fresh = '\0';
	return (aux);
}
