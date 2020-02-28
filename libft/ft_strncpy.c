/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 15:49:37 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/26 13:20:35 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t len)
{
	char	*ptr;

	if (dest == NULL)
		return (NULL);
	ptr = dest;
	if (!len--)
		return (ptr);
	while ((*dest++ = *src++))
	{
		if (!len--)
			return (ptr);
	}
	while (len--)
		*dest++ = '\0';
	return (ptr);
}
