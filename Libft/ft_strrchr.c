/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischeini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:55:34 by ischeini          #+#    #+#             */
/*   Updated: 2024/09/15 10:20:55 by ischeini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			*str;
	char			ch;

	ch = (char) c;
	str = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == ch)
			str = (char *) &s[i];
		i++;
	}
	if (s[i] == ch)
		str = (char *) &s[i];
	return ((char *) str);
}
