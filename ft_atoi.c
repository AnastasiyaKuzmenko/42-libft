/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akuzmenk <akuzmenk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:03:59 by akuzmenk          #+#    #+#             */
/*   Updated: 2022/11/24 16:06:42 by akuzmenk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_spaces(const char *nptr)
{
	int	index;

	index = 0;
	while (nptr[index] == ' '
		|| nptr[index] == '\n' || nptr[index] == '\t'
		|| nptr[index] == '\f' || nptr[index] == '\r' || nptr[index] == '\v')
	{
		index++;
	}
	return (index);
}

static int	ft_overflow(int sign)
{
	if (sign > 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}

int	ft_atoi(const char *nptr)
{
	int			index;
	int			sign;
	long int	result;

	index = ft_spaces(nptr);
	sign = 1;
	result = 0;
	if (nptr[index] == '-' || nptr[index] == '+')
	{
		if (nptr[index] == '-')
			sign = -1;
		index++;
	}
	while (nptr[index] >= '0' && nptr[index] <= '9')
	{
		result *= 10;
		result += (nptr[index] - '0');
		if (result < 0)
			return (ft_overflow(sign));
		index++;
	}
	return ((int)(sign * result));
}
