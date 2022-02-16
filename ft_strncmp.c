/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 19:15:26 by aakkaya           #+#    #+#             */
/*   Updated: 2022/02/16 20:07:51 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t size)
{
	int	i;

	i = 0;
	while (i <= size && (s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
			return (1);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char dizi1[] = "merhabalar";
	char dizi2[] = "merhabadwd";
	int len;

	len = 5;
	printf("%d", ft_strncmp(dizi1, dizi2, len));
}
*/