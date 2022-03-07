/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:10:54 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/06 04:20:35 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int main()
{
    char c;
    c = 'Q';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isdigit(c));

    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isdigit(c));

    c = '4';
    printf("\nResult when digit is passed: %d", ft_isdigit(c));

    c='+';
    printf("\nResult when non-digit character is passed: %d", ft_isdigit(c));

    return 0;
}
