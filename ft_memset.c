/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 21:31:59 by aakkaya           #+#    #+#             */
/*   Updated: 2022/02/16 10:45:00 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*ptr;
	size_t	len;

	len = 0;
	ptr = (char *)str;
	while (len < n)
	{
		ptr[len] = c;
		len++;
	}
	return (ptr);
}
/*
int main(void)
{
	char dizi[] = "komodo";
	printf("%s", ft_memset(dizi, 'x', 3));
	return (0);
}
*/