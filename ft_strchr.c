/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 11:21:51 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/10/25 17:09:58 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	index;

	index = 0;
	while (s[index] != '\0' && s[index] != (char)c)
	{
		index++;
	}
	if (s[index] == '\0' && s[index] != (char)c)
	{
		return (0);
	}
	return ((char *)&s[index]);
}
