/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischeini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:03:25 by ischeini          #+#    #+#             */
/*   Updated: 2024/09/15 10:21:15 by ischeini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ch;
	char	comp;
	int		i;

	i = 0;
	ch = (char *)s;
	comp = c;
	while (s[i] != comp)
	{
		if (!s[i])
			return (NULL);
		i++;
	}
	return ((char *)ch + i);
}
