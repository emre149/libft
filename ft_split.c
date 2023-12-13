/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:20:10 by ededemog          #+#    #+#             */
/*   Updated: 2023/12/13 19:40:35 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char delimeter)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if ((i == 0 && s[i] != c) || (i > 0 && s[i] != c & s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

int	fill(char **word_v, char const *s, char delimeter)
{
	size_t	len;
	size_t	i;
	size_t	pos;

	i = 0;
	while (*s)
	pos = 0;
	len = 0;
	while (s[i] == delimeter && s[i])
		i++;
	i = 0;
	while (s[i] != delimeter && s[i])
	{
		++len;
		++i;
	}
	if (len)
	{
		if (safe_malloc(token_v, i, len + 1))
			return (1);
	}
	ft_strlcpy(token_v[pos], s - len, len + 1);
}

char	**ft_split(const char *s, char c)
{
	size_t	words;
	char	**word_v;

	if (NULL == s)
		return NULL;
	words = 0;
	words = count_words(s, c);
	token_v = malloc(sizeof(char *) * token + 1);
	if (!token_v)
		return (NULL);
	word_v[words] = NULL;
	fill(word_v, s, c);
}