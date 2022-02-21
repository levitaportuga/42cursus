/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:56:06 by amatos-l          #+#    #+#             */
/*   Updated: 2022/02/21 17:17:04 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= "a" && c <= "z") || (c >= "A" && c <= "Z"))
		return(1);
	else
		return(0);
}

int main()
{
    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));

    return 0;
}
