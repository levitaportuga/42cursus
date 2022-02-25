/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 06:29:08 by amatos-l          #+#    #+#             */
/*   Updated: 2022/02/24 06:29:14 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
