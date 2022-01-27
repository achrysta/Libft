/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achrysta <achrysta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 20:14:38 by achrysta          #+#    #+#             */
/*   Updated: 2021/10/13 14:38:15 by achrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t len)
{
	char	*p;
	size_t	i;

	p = s;
	i = 0;
	while (i < len)
	{
		p[i] = '\0';
		i++;
	}
}
