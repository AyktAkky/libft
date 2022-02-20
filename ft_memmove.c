/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:48:40 by aakkaya           #+#    #+#             */
/*   Updated: 2022/02/20 09:05:30 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if(src == dest)
        return (dest);
    while (i <= n)
    {
        ((unsigned char *)dst)[i] == ((unsigned char *)src)[i];
        i++;
    }
    return (dest);
}