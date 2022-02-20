/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 23:20:26 by aakkaya           #+#    #+#             */
/*   Updated: 2022/02/20 01:14:21 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while(i < (n - 1))
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
            i++;
    }
    return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}

int main(void)
{
    char s1[] = "wilhelm";
    char s2[] = "wilhelm";

    printf("%d", ft_memcmp(s1, s2, 6));
}