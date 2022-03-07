/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:01:21 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/06 04:20:05 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int main()
{
    char c;
    c = '\t';
    printf("\nResult is passed: %d", ft_isascii(c));

    c = '(';
    printf("\nResult is passed: %d", ft_isascii(c));

    c='\n';
    printf("\nResult is passed: %d", ft_isascii(c));

    return 0;
}
