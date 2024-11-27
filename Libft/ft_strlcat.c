/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischeini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:46:06 by ischeini          #+#    #+#             */
/*   Updated: 2024/09/13 16:48:24 by ischeini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	size_src;
	size_t	size_dst;

	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	if (size_dst > size)
		return (size + size_src);
	if ((size_src + size_dst + 1) <= size)
		ft_strlcpy(dst + size_dst, src, size);
	else
		ft_strlcpy(dst + size_dst, src, size - size_dst);
	return (size_dst + size_src);
}
