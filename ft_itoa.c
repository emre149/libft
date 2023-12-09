/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 16:59:00 by ededemog          #+#    #+#             */
/*   Updated: 2023/12/09 20:48:01 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digits(long int nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (0);
	if (nb < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*malloc_cases(int n)
{
	char		*new;
	int			len;
	long int	nb;

	len = digits(n);
	nb = n;
	if (nb == 0)
	{
		new = malloc(sizeof(char) * 2);
		if (!new)
			return (NULL);
		new[0] = '0';
		new[1] = '\0';
		return (new);
	}
	else
	{
		new = malloc(sizeof(char) * (len + 1));
		if (!new)
			return (NULL);
		new[len] = '\0';
	}
	return (0);
}

char	*ft_itoa(int n)
{
	char		*new;
	int			len;
	int			i;
	long int	nb;

	nb = n;
	len = digits(n);
	if (nb)
		malloc_cases(nb);
	else
	{
		if (nb < 0)
		{
			new[0] = '-';
			nb *= -1;
		}
		i = len - 1;
		while (nb > 0)
		{
			new[i] = nb % 10 + '0';
			i--;
			nb /= 10;
		}
	}
	return (new);
}


#include <stdio.h>

int    main(void)
{
    int n = 0;

    char *s = ft_itoa(n);
    printf("%s\n", s);
    return (0);
}