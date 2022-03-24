/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 18:23:14 by aakkaya           #+#    #+#             */
/*   Updated: 2022/03/24 11:46:31 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*
int main(void)
{
	char dst[] = "AAAAAAAAAA";
	char src[] = "coucou";
	int i;

	i = 4;
	//printf("%d", ft_strlcpy(dst, src, i));

	printf("%lu", ft_strlcpy(dst, src, i));
	printf("\n%s", dst);

}
*/
// size -1 in sebebi örnegin 4 harf kopyalanacaksa indis 0 dan başlaması için 