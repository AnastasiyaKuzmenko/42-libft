/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 17:19:56 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/14 12:55:36 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	index;
	size_t	srclen;
	size_t	dstlen;

	index = 0;
	srclen = ft_strlen(src);
	if (dstsize == 0)
	{
		return (srclen);
	}
	dstlen = ft_strlen(dst);
	if (dstsize - 1 < dstlen)
	{
		return (dstsize + srclen);
	}
	while (src[index] != '\0' && index < dstsize - dstlen - 1)
	{
		dst[dstlen + index] = src[index];
		index++;
	}
	dst[dstlen + index] = '\0';
	return (srclen + dstlen);
}
