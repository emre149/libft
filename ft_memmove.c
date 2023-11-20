/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:22:42 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/20 20:06:55 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char	*dest_temp;
	char	*src_temp;
	size_t			i;

	i = 0;
	if (!dest && !src)
		return (NULL);
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	if (dest_temp > src_temp)
		while (len-- > 0)
			dest_temp[len] = src_temp[len];
	else
	{
		while (i++ < len)
			dest_temp[i] = src_temp[i];
	}
	return (dest);
}
