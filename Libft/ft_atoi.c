/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischeini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 13:23:10 by ischeini          #+#    #+#             */
/*   Updated: 2024/09/15 13:23:13 by ischeini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print(const char *nptr, int digit, int neg, int i)
{
	while (nptr[i] && ft_isdigit(nptr[i]))
	{
		digit *= 10;
		digit += nptr[i] - 48;
		i++;
		if (!ft_isdigit(nptr[i]))
		{
			digit *= neg;
			return (digit);
		}
	}
	return (digit);
}

static int	ft_isspace(const char c)
{
	if (c == ' ')
		return (c);
	else if (c == '\n')
		return (c);
	else if (c == '\f')
		return (c);
	else if (c == '\v')
		return (c);
	else if (c == '\r')
		return (c);
	else if (c == '\t')
		return (c);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	long int	i;
	long int	neg;
	long int	digit;

	i = 0;
	neg = 1;
	digit = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' && nptr[i + 1] != '-')
		i++;
	if (nptr[i] == '-')
	{
		neg = -1;
		i++;
	}
	digit = ft_print(nptr, 0, neg, i);
	if (digit != 0)
		return (digit);
	return (0);
}
