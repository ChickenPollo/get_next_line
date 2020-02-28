/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 15:38:38 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/26 13:42:41 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int ca, size_t n)
{
	const unsigned char *src;
	unsigned char		c;

	c = (unsigned char)ca;
	if (!s || n == 0)
		return (NULL);
	src = (const unsigned char *)s;
	while (n-- > 0)
	{
		if (*src == c)
			return ((void *)src);
		src++;
	}
	return (NULL);
}
