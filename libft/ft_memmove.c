/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:12:10 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/14 11:38:44 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dest;
	const char	*source;

	source = src;
	dest = dst;
	if (dst > src)
	{
		while (len--)
			dest[len] = source[len];
	}
	else
		ft_memcpy(dest, source, len);
	return (dst);
}
