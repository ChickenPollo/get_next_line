/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 18:46:40 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/22 19:02:19 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*new;
	char			*aux;
	unsigned int	i;

	len = ft_strlen(s);
	if (!(new = (char *)malloc((len * sizeof(char)) + 1)))
		return (NULL);
	aux = new;
	i = 0;
	while (*s)
	{
		*aux = (*f)(i, *s);
		aux++;
		s++;
		i++;
	}
	*aux = '\0';
	return (new);
}
