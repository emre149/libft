/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 11:54:19 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/09 14:31:27 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		needle_len;
	char		*temp;

	needle_len = ft_strlen(needle);
	temp = (char *)haystack;
	if (!*needle)
		return ((char *)haystack);
	while (*temp)
	{
		i = 0;
		if (*temp == needle[0])
		{
			while (temp[i] == needle[i] && i <= len)
				i++;
			if (i < needle_len)
				return (NULL);
		}
		temp++;
	}
	return (0);
}

#include <stdio.h>

int	main()
{
	const char hay[] = "bonjour emre";
	const char need[] = "emre";
	size_t len = 1;

	printf("%s", ft_strnstr(hay, need, len));
}