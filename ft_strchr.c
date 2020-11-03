/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:46:56 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/05/10 15:47:06 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ss;

	ss = (char *)s;
	while (*ss != c)
	{
		if (*ss == '\0')
			return (NULL);
		ss++;
	}
	return (ss);
}