/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:05:23 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/10 16:58:44 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t size)
{
	void	*dest_temp;
	void	*src_temp;

	if (!src && !dest)
		return (dest);
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	while (size > 0)
	{
		*(dest_temp++) = *(src_temp++);
		size--;
	}
	return (dest);
}

#include <stdio.h>

int main() {
    char source[] = "Bonjour!";
    char destination[20];

    // Utilisez votre fonction my_memcpy ici
    ft_memcpy(destination, source, ft_strlen(source) + 1);

    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);

    return 0;
}