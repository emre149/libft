/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 17:21:11 by ededemog          #+#    #+#             */
/*   Updated: 2023/12/10 19:01:48 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	if (c >= 0 && c < 32)
		return (1);
	else
		return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	begin;
	size_t	end;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return (NULL);
	begin = 0;
	end = ft_strlen(s1);
	while (s1[begin] && ft_isspace(s1[begin]))
		begin++;
	while (ft_isspace(s1[end - 1]) && end > begin)
		end--;
	if (begin >= end)
		return (ft_strdup(""));
	ptr = malloc(sizeof(char) * (end - begin) + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s1 + begin, end - begin + 1);
	return (ptr);
}




/*
1 - verifier si les caracteres de set sont present dans la s1 a laide de strchr
2 - creer une nouvelle chaine dans laquelle on va copier tout ce qui n'est pas trouver par strchr (donc que les bons char)
*/