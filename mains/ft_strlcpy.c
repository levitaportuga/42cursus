/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 07:51:07 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/06 04:22:56 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int	main()
{
	const char src[] = "World!";
	char dest[] = "";
	printf("%zu | %s\n", ft_strlcpy(dest, src, 3), dest);
//	const char src2[] = "World!";
//	char dest2[] = "a";
//	printf("%zu | %s", strlcpy(dest2, src2, 3), dest2);
}
