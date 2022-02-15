/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 14:38:56 by aakkaya           #+#    #+#             */
/*   Updated: 2022/02/15 14:54:00 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//eger karakter alfabede yer alıyorsa herhangi bir sayı değilse sıfır çevirir.

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}
/*
int	main(void)
{
	char c;

	c = '2';
	printf("%d", ft_isalpha(c));
}*/
