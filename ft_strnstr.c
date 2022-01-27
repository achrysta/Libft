/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achrysta <achrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 18:45:07 by achrysta          #+#    #+#             */
/*   Updated: 2021/10/13 18:39:46 by achrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		n;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] && i < len)
	{
		n = 0;
		if (haystack[i] == needle[n])
		{
			while (i + n < len && haystack[i + n] == needle[n])
			{
				n++;
				if (needle[n] == 0)
					return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
