/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:34:21 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/11 14:38:45 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	size_t	len;
	size_t	index;

	index = 0;
	len = ft_strlen(s1);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (NULL == result)
	{
		return (0);
	}
	while (index < len)
	{
		result[index] = s1[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
