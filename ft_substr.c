/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:24:21 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/30 17:54:06 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	const char	*new;
	const char	*temp;
	unsigned int		i;

	i = 0;
	new = malloc(sizeof(char) * len);
	if (!new)
		return (NULL);
	while (s[i] && i < len)
	{
		if (i == start)
		{
			new[i] == s[i];
		}
		else
			return (0);
		i++;
	}
	return (0);
}