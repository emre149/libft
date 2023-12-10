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

char	*ft_strtrim(const char *s1, const char *set)
{
	while (s1[i])
	{
		if (s1[i] == (char *)set)
		{
			
		}
	}
}



/*
1 - verifier si les caracteres de set sont present dans la s1 a laide de strchr
2 - creer une nouvelle chaine dans laquelle on va copier tout ce qui n'est pas trouver par strchr (donc que les bons char)
*/