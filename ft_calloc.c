/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 01:32:15 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/21 02:42:45 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*temp;
	size_t			i;

	temp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		temp[i] == 0;
		i++;
	}
	return (temp);
}