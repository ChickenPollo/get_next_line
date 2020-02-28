/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:23:44 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/22 16:25:31 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *aux;

	aux = s1;
	while (*aux)
		aux++;
	while (*s2 && n > 0)
	{
		*aux = *s2;
		aux++;
		s2++;
		n--;
	}
	*aux = '\0';
	return (s1);
}
