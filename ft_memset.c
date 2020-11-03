/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 20:47:08 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/05/14 22:22:28 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*cast;

	i = 0;
	cast = (unsigned char *)str;
	if (n == 0)
		return (str);
	while (i < n)
	{
		cast[i] = c;
		i++;
	}
	return (str);
}
