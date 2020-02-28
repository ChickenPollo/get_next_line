/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 12:02:08 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/24 12:48:13 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *haystack, const char *needle)
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
			while (haystack[i] == needle[j])
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
