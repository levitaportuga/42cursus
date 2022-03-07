/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amatos-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 04:23:40 by amatos-l          #+#    #+#             */
/*   Updated: 2022/03/06 04:23:51 by amatos-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int main()
{
        const   char str1[]     = "aa";
        const   char str2[]     = "aaza";

        printf("strncmp: %d ", strncmp(str1, str2, 4));
        printf("ft_strncmp: %d ", ft_strncmp(str1, str2, 4));
}

