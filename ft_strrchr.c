/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 11:11:44 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/11 14:39:58 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	index;

	index = ft_strlen(s);
	while (index != 0 && s[index] != (char)c)
	{
		index--;
	}
	if (index == 0 && s[index] != (char)c)
	{
		return (0);
	}
	return ((char *)&s[index]);
}
