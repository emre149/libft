/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonnaci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emre149 <emre149@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 15:32:59 by emre149           #+#    #+#             */
/*   Updated: 2025/02/10 16:05:05 by emre149          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	ft_fibonnaci(int n)
{
	if (n <= 1)
		return (n);
	return (ft_fibonnaci(n - 1) + ft_fibonnaci(n - 2));
}
