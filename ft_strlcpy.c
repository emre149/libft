/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:24:53 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/08 16:49:14 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (!dest)
	{
		return (0);
	}
	if (size > 0)
	{
		while (src[i] && src && i < size -1)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (ft_strlen(src));
}
