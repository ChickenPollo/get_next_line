/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:25:10 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/24 13:18:58 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	j;
	int	aux;

	if (needle[0] == '\0')
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			aux = i;
			while (haystack[i] == needle[j] && aux + j < (int)len)
			{
				if (needle[j + 1] == '\0')
					return ((char *)&haystack[aux]);
				j++;
				i++;
			}
			i = aux;
		}
		i++;
	}
	return (NULL);
}
