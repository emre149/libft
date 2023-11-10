/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:44:16 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/08 15:07:08 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main()
{
	printf("atoi : %d\n", ft_atoi("149"));
	printf("isalpha : %d\n", ft_isalpha('a'));
	printf("isdigit : %d\n", ft_isdigit(1));
	printf("isalnum : %d\n", ft_isalnum('a'));
	printf("isascii : %d\n", ft_isascii('a'));
	printf("isprint : %d\n", ft_isalpha('a'));
	
	const char str[] = "bonjour emre";
	int	searched = 'b';

	printf("strrchr : %s\n", ft_strrchr(str, searched));
	printf("strchr : %s\n", ft_strchr(str, searched));
	printf("strlen : %zu\n", ft_strlen(str));
	printf("tolower : %d\n", ft_tolower(searched));
	printf("toupper : %d\n", ft_toupper(searched));

	// memset
	char mem[50];
	ft_memset(mem, 'x', 50);
	ft_memset(mem, 'a', 10);
	for (int i = 0; i < 50; i++)
		printf("%c", mem[i]);
	printf("\n");
	//printf("%s\n", mem);
	return 0;
}