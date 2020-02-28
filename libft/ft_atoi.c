/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luimarti <luimarti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/25 19:15:45 by exam              #+#    #+#             */
/*   Updated: 2020/02/26 21:10:42 by luimarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_whitespace(const char c)
{
	return ((c == ' ' || c == '\n' || c == '\t' ||
			c == '\v' || c == '\f' || c == '\r'));
}

int			ft_atoi(const char *str)
{
	int	res;
	int	sign;

	sign = 1;
	res = 0;
	while (*str && is_whitespace(*str))
		++str;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * sign);
}
