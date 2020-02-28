/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 20:13:49 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/22 20:22:37 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char a;

	a = (char)c;
	while (*s != a && *s)
	{
		s++;
	}
	if (a == *s)
		return ((char *)s);
	else
		return (NULL);
}
