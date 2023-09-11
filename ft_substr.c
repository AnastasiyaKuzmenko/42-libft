/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:21:54 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/18 15:43:19 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	j;

	if (!s)
		return (0);
	if (ft_strlen(s + start) < len)
	{
		len = ft_strlen(s + start);
	}
	result = (char *)malloc(sizeof(char) * len + 1);
	if (NULL == result)
	{
		return (NULL);
	}
	j = 0;
	if (start < ft_strlen(s))
	{
		while (s[start + j] != '\0' && j < len)
		{
			result[j] = s[start + j];
			j++;
		}
	}
	result[j] = '\0';
	return (result);
}
