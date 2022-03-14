/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:54:34 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/14 12:19:32 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	const char	*str2;

	i = 0;
	str2 = str;
	while (i < n)
	{
		if (str2[i] == (char)c)
		{
			return ((char *)str + i);
		}
		i++;
	}
	return (0);
}
