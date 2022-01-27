/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achrysta <achrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 14:35:43 by achrysta          #+#    #+#             */
/*   Updated: 2021/10/25 16:51:25 by achrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*substr;
	size_t		k;
	size_t		i;

	if (!s)
		return (NULL);
	i = 0;
	k = 0;
	if ((int)ft_strlen(s + start) < (int)len)
		len = ft_strlen(s + start);
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	while (s[i])
	{
		if (i >= start && k < len)
		{
			substr[k] = s[i];
			k++;
		}
		i++;
	}
	substr[k] = '\0';
	return (substr);
}
