/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:50:43 by aakkaya           #+#    #+#             */
/*   Updated: 2022/02/19 18:50:43 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dizi;
	unsigned char	nc;
	int				i;

	i = 0;
	nc = (unsigned char)c;
	dizi = (unsigned char *)s;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (dizi[i] == nc)
		{
			return (&((unsigned char *)s)[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char dizi[] = "alalalpeem";
	
	printf("%s\n", ft_memchr(dizi, 'a',0));
	printf("%s\n", memchr(dizi, 'a',0));
}*/