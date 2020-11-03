/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fboudyaf <fboudyaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/10 15:51:10 by fboudyaf          #+#    #+#             */
/*   Updated: 2018/11/22 18:19:13 by fboudyaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	int		i;

	i = 0;
	ss = (char *)s;
	if (ss[i] == '\0' && c == '\0')
		return (ss);
	while (ss[i] != '\0')
		i++;
	while (i > 0)
	{
		while (ss[i] != c && i > 0)
			i--;
		if (ss[i] == c)
			return (ss + i);
	}
	return (NULL);
}
