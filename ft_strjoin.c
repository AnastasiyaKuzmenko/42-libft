/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 13:10:49 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/14 15:06:39 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		s1len;
	int		s2len;
	int		index;

	index = 0;
	if (!s1 || !s2)
		return (NULL);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	result = (char *)malloc(sizeof(char) * (s1len + s2len + 1));
	if (NULL == result)
		return (0);
	while (index < s1len + s2len)
	{
		if (index < s1len)
			result[index] = s1[index];
		else
			result[index] = s2[index - s1len];
		index++;
	}
	result[index] = '\0';
	return (result);
}
