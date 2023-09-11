/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:46:30 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/11 15:23:02 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*buf;
	unsigned char	*mem;
	size_t			index;

	if (!dst && !src)
	{
		return (NULL);
	}
	buf = (unsigned char *)dst;
	mem = (unsigned char *)src;
	index = 0;
	while (index < n)
	{
		buf[index] = mem[index];
		index++;
	}
	return (buf);
}
