/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/20 12:22:55 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/20 14:13:13 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char		*tp;
	const unsigned char	*fp;
	unsigned char		uc;

	if (n)
	{
		tp = dest;
		fp = src;
		uc = (char)c;
		while (n != 0)
		{
			if ((*tp++ = *fp++) == uc)
				return (tp);
			n--;
		}
	}
	return (NULL);
}
