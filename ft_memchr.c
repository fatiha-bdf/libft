/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:44:17 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/06/01 17:48:00 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*str1;
	int				i;

	i = 0;
	str1 = (unsigned char*)str;
	while (n--)
	{
		if (str1[i] == (unsigned char)c)
			return (str1 + i);
		i++;
	}
	return (NULL);
}
