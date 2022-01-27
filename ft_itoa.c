/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achrysta <achrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:23:11 by achrysta          #+#    #+#             */
/*   Updated: 2021/10/21 19:24:25 by achrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(int n)
{
	int	copy;
	int	lena;

	copy = n;
	lena = 0;
	if (copy < 0)
		lena++;
	while (copy / 10)
	{
		lena++;
		copy = copy / 10;
	}
	return (lena + 1);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	result = (char *) malloc(length(n) + 1);
	if (!result)
		return (NULL);
	if (n == -2147483648)
	{
		ft_strlcpy(result, "-2147483648", 12);
		return (result);
	}
	i = length(n);
	result[i--] = '\0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n / 10)
	{
		result[i--] = n % 10 + '0';
		n = n / 10;
	}
	result[i] = n % 10 + '0';
	return (result);
}
