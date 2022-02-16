/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 20:30:30 by aakkaya           #+#    #+#             */
/*   Updated: 2022/02/16 10:46:30 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	i++;
	return (i);
}
/*
int main(void)
{
	char str[] = "kek";
	int uzunluk = ft_strlen(str);
	printf("%d", uzunluk);
}
*/