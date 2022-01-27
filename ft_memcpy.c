/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achrysta <achrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:09:20 by achrysta          #+#    #+#             */
/*   Updated: 2021/10/21 18:59:34 by achrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	char				*msrc;
	char				*mdst;

	if (!dst && !src)
		return (0);
	msrc = (char *) src;
	mdst = (char *) dst;
	i = 0;
	while (i < n)
	{
		mdst[i] = msrc[i];
		i++;
	}
	return (dst);
}
