/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 14:01:32 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/30 11:37:53 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_size(int n, int flagmin)
{
	int	size;

	size = 1;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	if (flagmin == 1)
	{
		size++;
	}
	while (n >= 10)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

static void	ft_reverse(char *s, int len)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = len - 1;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}

static int	ft_tochar(int n, size_t len, char **result)
{
	size_t	index;

	index = 0;
	*result = (char *)malloc(len + 1);
	if (NULL == *result)
	{
		return (0);
	}
	while (index < len)
	{
		(*result)[index] = '0' + (n % 10);
		n /= 10;
		index++;
	}
	return (1);
}

static void	ft_initialize(int *n, int *sign, int *flagmin)
{
	*sign = 1;
	*flagmin = 0;
	if (*n == -2147483648)
	{
		*flagmin = 1;
		*n = -147483648;
	}
	if (*n < 0)
	{
		*sign = -1;
	}
}

char	*ft_itoa(int n)
{
	int		len;
	char	*result;
	int		sign;
	int		flagmin;

	ft_initialize(&n, &sign, &flagmin);
	len = ft_get_size(n, flagmin);
	n = sign * n;
	ft_tochar(n, len, &result);
	if (NULL == result)
		return (0);
	if (sign == -1)
	{
		if (flagmin == 1)
			result[len - 2] = '2';
		result[len - 1] = '-';
		result[len] = '\0';
	}
	else
		result[len] = '\0';
	ft_reverse(result, len);
	return (result);
}
