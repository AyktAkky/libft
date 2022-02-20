/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakkaya <aakkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:52:45 by aakkaya           #+#    #+#             */
/*   Updated: 2022/02/19 17:52:45 by aakkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	int i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)s) = 0;
		i++;
		s++;
	}
}