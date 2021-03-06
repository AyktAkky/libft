/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 01:48:40 by aakkaya           #+#    #+#             */
/*   Updated: 2022/03/24 11:45:49 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (src == dst)
		return (dst);
	if (dst > src)
	{
		while (n--)
		{
			*((unsigned char *)dst + n) = *((unsigned char *)src + n);
		}
		return (dst);
	}
	else
	{
		while (i <= n)
		{
			ft_memcpy(dst, src, n);
			return (dst);
		}
	}
	return (dst);
}

/*
int main(void)
{
    char dst[] = "rhaba";
    char src[] = "merhaba";

    printf("%s", ft_memmove(dst, src, ));
    printf("%s", memmove(dst, src, 6));
}
*/
//*((unsigned char *)src + n)