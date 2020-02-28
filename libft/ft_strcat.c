/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/22 16:18:21 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/22 16:22:54 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *s1, const char *s2)
{
	char *aux;

	aux = s1;
	while (*aux)
		aux++;
	while (*s2)
	{
		*aux = *s2;
		aux++;
		s2++;
	}
	*aux = '\0';
	return (s1);
}
