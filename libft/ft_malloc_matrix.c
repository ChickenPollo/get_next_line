/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malloc_matrix.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/27 14:39:09 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/27 14:46:29 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	**ft_malloc_matrix(unsigned int a, unsigned int b)
{
	int				**matrix;
	unsigned int	i;

	if (!(matrix = (int**)malloc(sizeof(int*) * a)))
		return (NULL);
	i = 0;
	while (i < a)
	{
		if (!(matrix[i] = (int*)malloc(sizeof(int) * b)))
			return (NULL);
		i++;
	}
	return (matrix);
}
