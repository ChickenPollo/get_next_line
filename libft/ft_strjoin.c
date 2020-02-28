/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 16:28:17 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/24 16:33:09 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*fresh;
	int		i;

	if (!(fresh = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	i = 0;
	while (*s1)
	{
		fresh[i] = *s1;
		s1++;
		i++;
	}
	while (*s2)
	{
		fresh[i] = *s2;
		s2++;
		i++;
	}
	fresh[i] = '\0';
	return (fresh);
}
