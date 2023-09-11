/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 13:42:31 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/14 15:02:49 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	index;

	index = 0;
	while (index < n && *(char *)s != (char)c)
	{
		index++;
		s++;
	}
	if (index == n || *(char *)s != (char)c)
	{
		return (0);
	}
	return ((void *)s);
}
