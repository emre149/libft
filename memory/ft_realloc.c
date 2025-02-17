/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emre149 <emre149@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 16:17:25 by ededemog          #+#    #+#             */
/*   Updated: 2025/02/10 16:00:47 by emre149          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_realloc(void *ptr, size_t size)
{
	char	*new;

	if (!ptr)
		new = malloc(size);
	if (!size && ptr)
	{
		ft_memdel(ptr);
		return (ptr);
	}
	new = (char *)malloc(size);
	if (!new)
		return (NULL);
	ft_memcpy(new, ptr, size);
	ft_memdel(&ptr);
	ptr = new;
	return (ptr);
}
