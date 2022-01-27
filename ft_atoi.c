/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achrysta <achrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/13 18:47:44 by achrysta          #+#    #+#             */
/*   Updated: 2021/10/25 17:18:47 by achrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_max_min(long long int nbr, long long int sign)
{
	if (nbr >= 2147483648)
	{
		if (sign == 1)
			return (-1);
		else if (nbr > 2147483648)
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	long long int		num;
	long long int		i;
	long long int		sign;

	num = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n'
		|| str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str [i] == '\r')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
		if (ft_max_min(num, sign) != 1)
			return (ft_max_min(num, sign));
	}
	return (sign * num);
}
