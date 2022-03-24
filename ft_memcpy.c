/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 21:38:12 by aakkaya           #+#    #+#             */
/*   Updated: 2022/03/24 11:40:07 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*ndest;

	if (!dest && !src)
		return (NULL);
	ndest = dest;
	while (n--)
	{
		(*(unsigned char *)dest++) = (*(unsigned char *)src++);
	}
	return (ndest);
}

/*
int main(void)
{
    char mdest[] = "komodo";
    char msrc[] = "alamut";

    printf("%s", ft_memcpy(mdest, msrc, 4));
}
*/