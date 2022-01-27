/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achrysta <achrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 14:09:28 by achrysta          #+#    #+#             */
/*   Updated: 2021/10/21 19:00:17 by achrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char				*fsrc;
	char				*fdst;
	char				*lsrc;
	char				*ldst;

	if (!dst && !src)
		return (0);
	fsrc = (char *) src;
	fdst = (char *) dst;
	lsrc = fsrc + (n - 1);
	ldst = fdst + (n - 1);
	if (fdst < fsrc)
		while (n--)
			*fdst++ = *fsrc++;
	else
		while (n--)
			*ldst-- = *lsrc--;
	return (dst);
}
