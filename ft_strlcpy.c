/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 16:24:53 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/29 16:59:41 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src && src[i] && i < size -1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
/*
#include <stdio.h>
int main() {
    char dest2[11];
    const char src2[] = "aaaaaaaaaa";
    size_t result2 = ft_strlcpy(dest2, src2, sizeof(dest2));
    printf("Test 2 - Resultat: %zu, Destination: %s\n", result2, dest2);
}
*/