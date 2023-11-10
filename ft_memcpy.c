/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ededemog <ededemog@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 13:05:23 by ededemog          #+#    #+#             */
/*   Updated: 2023/11/10 16:35:42 by ededemog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void * dest, const void *src, size_t size)
{
	void	*dest_temp;
	void	*src_temp;

	if (!src && !dest)
		return (dest)
	dest_temp = (unsigned char *)dest;
	src_temp = (unsigned char *)src;
	while (dest_temp <= size)
	{
		dest_temp = src_temp; 
	}
}