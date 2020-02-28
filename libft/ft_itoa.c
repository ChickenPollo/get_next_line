/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/21 18:42:16 by luimarti          #+#    #+#             */
/*   Updated: 2020/02/24 20:15:52 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_digit_count(int n)
{
	int	d;

	d = 1;
	while ((n /= 10) != 0)
		d++;
	return (d);
}

static char	get_digit(int digit, int n)
{
	while (--digit)
		n /= 10;
	n %= 10;
	if (n < 0)
		n *= -1;
	return (n + '0');
}

char		*ft_itoa(int n)
{
	int		negative;
	int		digit_index;
	char	*res;
	char	*aux;

	negative = (n < 0);
	digit_index = get_digit_count(n);
	if (!(res = (char *)ft_memalloc(digit_index + negative + 1)))
		return (NULL);
	aux = res;
	if (negative)
		*(res++) = '-';
	while (digit_index > 0)
	{
		*res = get_digit(digit_index, n);
		digit_index--;
		res++;
	}
	*res = '\0';
	return (aux);
}
