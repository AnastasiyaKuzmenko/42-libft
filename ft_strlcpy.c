/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 11:51:00 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/23 12:26:47 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	srcsize;
	size_t	i;

	index = 0;
	i = 0;
	srcsize = ft_strlen(src);
	if (dstsize == 0)
	{
		return (srcsize);
	}
	while (src[i])
		i++;
	while (index < dstsize - 1 && src[index] != '\0')
	{
		dst[index] = src[index];
		index++;
	}
	dst[index] = '\0';
	return (i);
}
