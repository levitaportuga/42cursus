/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 12:20:13 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/14 13:25:28 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = s1;
	str2 = s2;
	if (n == 0)
		return (0);
	i = 0;
	while (str1[i] == str2[i])
	{
		if (i < (n - 1))
			i++;
		else
			return (0);
	}
	return (str1[i] - str2[i]);
}
