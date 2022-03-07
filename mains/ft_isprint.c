/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 05:20:22 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/06 04:21:03 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int main()
{
    char c;
    c = 'A';
    printf("\nResult when uppercase alphabet is passed: %d", ft_isprint(c));

    c = 'a';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isprint(c));

    c='\n';
    printf("\nResult when non-printable character is passed: %d", ft_isprint(c));

    return 0;
}
