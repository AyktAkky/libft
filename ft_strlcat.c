/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 19:13:24 by aakkaya           #+#    #+#             */
/*   Updated: 2022/03/24 11:44:13 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;
	size_t	j;

	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	i = 0;
	j = destlen;
	if (destlen < size - 1 && size > 0)
	{
		while (src[i] != '\0' && destlen + i < size - 1)
		{
			dest[j] = src[i];
			i++;
			j++;
		}
		dest[j] = '\0';
	}
	if (destlen >= size)
		destlen = size;
	return (destlen + srclen);
}

/*
int	main()
{
	char	dest[20] = "blitz";
	char	src[] = "kreig";


	printf("%d", ft_strlcat(dest,src, 10));
}
//byte ı kendimiz belirlememizin sebebi eger dest i tanımsız 
//bıraksaydık içindeki ilk dizi kadar byte a sahip olacaktı
//sonradan sonuna birşey koyamayız. */