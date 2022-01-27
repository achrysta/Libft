/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achrysta <achrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/14 16:05:41 by achrysta          #+#    #+#             */
/*   Updated: 2021/10/25 16:50:29 by achrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*newstr;
	int		i;
	int		k;

	if (!s1 || !s2)
		return (NULL);
	newstr = NULL;
	newstr = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (s1[i] != '\0')
		newstr[i++] = s1[k++];
	k = 0;
	while (s2[k] != '\0')
		newstr[i++] = s2[k++];
	newstr[i] = '\0';
	return (newstr);
}
