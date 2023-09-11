/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:12:00 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/11 14:40:38 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_findchar(char const *set, char c)
{
	int	index;

	index = 0;
	while (set[index] != '\0')
	{
		if (set[index] == c)
		{
			return (1);
		}
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*result;
	int		i;
	int		j;

	i = 0;
	if (!s1 || !set)
	{
		return (0);
	}
	while (s1[i] != '\0' && ft_findchar(set, s1[i]))
	{
		i++;
	}
	j = ft_strlen(s1) - 1;
	while (j > i && ft_findchar(set, s1[j]))
	{
		j--;
	}
	result = ft_substr(s1, i, j - i + 1);
	return (result);
}
