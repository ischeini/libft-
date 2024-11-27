/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischeini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 21:08:05 by ischeini          #+#    #+#             */
/*   Updated: 2024/09/13 16:49:48 by ischeini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size == 0)
		return (ft_strlen(src));
	if (size >= ft_strlen(src) + 1)
	{
		size = ft_strlen(src);
		ft_memmove(dst, src, size);
	}
	else
	{
		size--;
		ft_memmove(dst, src, size);
	}
	dst[size] = '\0';
	return (ft_strlen(src));
}
