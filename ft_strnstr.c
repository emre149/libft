/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:14:16 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/29 19:24:37 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	if (!haystack && needle)
		return (NULL);
	while (haystack[i] && i < len)
	{
		while (needle[j] && i + j < len && haystack[i + j] &&
			haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == 0)
				return ((char *)haystack + i);
		}
		i++;
		j = 0;
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main()
{
	const char hay[] = "";
	const char need[] = "emre";

	printf("%s", ft_strnstr(hay, need, 15));
	printf("%s", strnstr(hay, need, 15));
}
*/