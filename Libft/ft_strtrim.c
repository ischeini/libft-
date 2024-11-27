/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischeini <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 16:52:02 by ischeini          #+#    #+#             */
/*   Updated: 2024/09/18 16:52:02 by ischeini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char const s1, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (s1 == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	int		j;

	i = 0;
	j = ft_strlen(s1);
	if (ft_strlen(s1) == 0)
		return (ft_strdup(""));
	while (s1[i] && ft_isset(s1[i], set))
		i++;
	if (i == ft_strlen(s1))
		return (ft_substr(s1, i, j));
	while (ft_isset(s1[j - 1], set))
		j--;
	return (ft_substr(s1, i, j - i));
}
