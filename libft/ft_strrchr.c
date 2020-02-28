/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:24:18 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/26 13:29:44 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;
	char	find;

	if (c == 0)
	{
		while (*s)
			s++;
		return ((char *)s);
	}
	aux = NULL;
	find = (char)c;
	while (*s)
	{
		if (find == *s)
			aux = (char *)s;
		s++;
	}
	return (aux);
}
