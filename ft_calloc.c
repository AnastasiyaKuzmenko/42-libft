/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:10:27 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/30 12:26:21 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	bytes;

	bytes = count * size;
	if (count != 0 && size != 0 && bytes / size != count)
	{
		return (NULL);
	}
	ptr = malloc(count * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, count * size);
	return (ptr);
}
