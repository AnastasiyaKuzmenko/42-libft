/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:50:08 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/14 18:27:39 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	if (n == 0)
	{
		return (0);
	}
	index = 0;
	while (s1[index] == s2[index] && index < n - 1
		&& s1[index] != '\0' && s2[index] != '\0')
	{
		index++;
	}
	return ((unsigned char)s1[index] - (unsigned char)s2[index]);
}
