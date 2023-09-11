/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 13:33:17 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/18 11:37:37 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	index;
	size_t			slen;

	index = 0;
	if (!s || !f)
	{
		return (NULL);
	}
	slen = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (slen + 1));
	if (NULL == str)
	{
		return (0);
	}
	while (s[index] != '\0')
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}
