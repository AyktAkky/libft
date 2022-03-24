/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 14:37:54 by aakkaya           #+#    #+#             */
/*   Updated: 2022/03/24 11:48:43 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}

/*
int main(void)
{
	char samanlik[] = "ali top at";
	char igne[] = "top";
	int i;

	i = 10;
	printf("%s", ft_strnstr(samanlik, igne, i));
}
*/
/*
strnstr bir metnin icinde belirlediğimiz kelimeyi arar

ornek ali top at , top bul return olarak top at.

h = kelimenin strlen'i

n = aradıgımız kelimenin strlen'i

haystack = metnimiz

needle = arayacağımız kısım

len = bizim aranacak kısmı belirlediğimiz aralık. 

h + n < len dememizin sebebi h+n in toplamının her zaman bizim
istediğimiz aralıktan küçük olması gerektiğidir. 
*/