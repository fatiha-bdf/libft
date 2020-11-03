/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:49:03 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/05/14 18:23:25 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t len;
	size_t i;

	len = 0;
	i = 0;
	while (dst[len] && len < dstsize)
		len++;
	while (src[i] && i + len + 1 < dstsize)
	{
		dst[len + i] = src[i];
		i++;
	}
	if (len != dstsize)
		dst[len + i] = '\0';
	return (len + ft_strlen(src));
}
