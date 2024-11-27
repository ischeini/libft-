/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischeini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:51:56 by ischeini          #+#    #+#             */
/*   Updated: 2024/09/19 16:51:58 by ischeini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_min(long int n)
{
	char	*c;

	c = ft_itoa(n + 1);
	c[ft_strlen(c) - 1]++;
	return (c);
}

static	int	ft_intlen(int nbr)
{
	int	count;

	count = 1;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr >= 10)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*c;
	int		i;

	if (n == INT_MIN)
	{
		c = ft_min(n);
		return (c);
	}
	c = ft_calloc(ft_intlen(n) + 1, sizeof(char));
	if (!c)
		return (NULL);
	i = ft_intlen(n) - 1;
	if (n < 0)
	{
		c[0] = '-';
		n *= -1;
	}
	if (n == 0)
		c[0] = '0';
	while (n > 0)
	{
		c[i--] = (n % 10) + 48;
		n /= 10;
	}
	return (c);
}
