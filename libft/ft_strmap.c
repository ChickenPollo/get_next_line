/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:26:35 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/22 18:45:24 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmap(const char *s, char (*f)(char))
{
	size_t	len;
	char	*new;
	char	*aux;

	len = ft_strlen(s);
	if (!(new = (char *)malloc((len * sizeof(char)) + 1)))
		return (NULL);
	aux = new;
	while (*s)
	{
		*aux = (*f)(*s);
		aux++;
		s++;
	}
	*aux = '\0';
	return (new);
}
