/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 18:04:31 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/30 16:18:25 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_counterchar(char const *s, char c)
{
	int	counter;
	int	index;

	counter = 0;
	index = 0;
	while (s[index] != '\0')
	{
		while (s[index] == c && s[index] != '\0')
		{
			index++;
		}
		while (s[index] != c && s[index] != '\0')
		{
			index++;
		}
		if (index > 0 && s[index - 1] != c)
		{
			counter++;
		}
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	index;
	size_t	len;

	index = 0;
	if (!s)
		return (0);
	result = (char **)malloc(sizeof(char *) * (ft_counterchar(s, c) + 1));
	if (NULL == result)
		return (0);
	while (*s)
	{
		if (*s != c)
		{
			len = 0;
			while (*s && *s != c && ++len)
				++s;
			result[index++] = ft_substr(s - len, 0, len);
		}
		else
			++s;
	}
	result[index] = 0;
	return (result);
}
