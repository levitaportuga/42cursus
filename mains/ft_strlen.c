/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 04:23:17 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/06 04:23:25 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		ft_strlen(char *str);

int		main (void)
{
	char str[] = "Amanda";

	int count = ft_strlen(str);
	
	printf("%d\n", count);
}
