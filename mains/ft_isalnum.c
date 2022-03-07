/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 06:44:09 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/06 04:18:54 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int main()
{
    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isalnum(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalnum(c));

    c = '4';
    printf("\nResult when number is passed: %d", ft_isalnum(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", ft_isalnum(c));

    return 0;
}
