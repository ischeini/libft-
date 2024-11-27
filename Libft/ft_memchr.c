/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischeini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 10:22:58 by ischeini          #+#    #+#             */
/*   Updated: 2024/09/15 10:44:12 by ischeini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	ch;
	size_t			b;

	str = (unsigned char *)s;
	b = 0;
	ch = c;
	while (b < n)
	{
		if (str[b] == ch)
			return ((void *)s + b);
		b++;
	}
	return (NULL);
}
