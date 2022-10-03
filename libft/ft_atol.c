/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsaiago <gsaiago@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:38:29 by gsaiago           #+#    #+#             */
/*   Updated: 2022/10/03 14:53:01 by gsaiago          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_tatol(const char *str, long int sign);

long int	ft_atol(const char *str)
{
	int		sign;

	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+' && str[1] >= '0' && str[1] <= '9')
		str++;
	else if (*str == '-' && str[1] >= '0' && str[1] <= '9')
	{
		str++;
		sign = -1;
	}
	if (*str >= '0' && *str <= '9')
		return (ft_tatol(str, sign));
	return (0);
}

long int	ft_tatol(const char *str, long int sign)
{
	int			len;
	int			i;
	int			max;
	long int	numb;

	i = -1;
	len = 0;
	max = 0;
	numb = 0;
	while (str[len] >= '0' && str[len] <= '9')
		len++;
	max = len;
	while (++i < max)
		numb = numb + (str[i] - 48) * ft_pow(10, --len);
	return (numb * sign);
}
