/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:52:37 by amatos-l          #+#    #+#             */
/*   Updated: 2022/02/14 16:40:01 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>

int	ft_atoi(const char *str)
{
	int		i;
	int		n;
	long	r;

	i = 0;
	r = 0;
	while (str[i])
	{
		if (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
			i++;
		if (str[i] == '+' || str[i] == '-')
		{
			if (str[i] == '-')
				n = -1;
			i++;
		}
		if (str[i] >= '0' && str[i] <= '9')
		{
			r = r * 10 + str[i] - '0';
		}
		else
			return (0);
		i++;
	}
	return (r);
}
	int		main(void)
{
	printf("%d\n", ft_atoi("      	+2147--+-ab567"));
	printf("%d\n", atoi("        +2147--+-ab567"));
}
