/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ischeini <ischeini@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 11:34:08 by ischeini          #+#    #+#             */
/*   Updated: 2024/10/12 16:08:32 by ischeini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_create_str(const char *s, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc((end - start + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (start < end)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = 0;
	return (str);
}

static void	*ft_free(char **strings, int j)
{
	while (0 <= j--)
		free(strings[j]);
	free(strings);
	return (NULL);
}

static int	ft_sc(const char *str, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (*str)
	{
		if (*str != c && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*str == c)
			i = 0;
		str++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**strings;
	int		j;
	int		start;

	i = -1;
	j = 0;
	start = -1;
	strings = ft_calloc(ft_sc(s, c) + 1, sizeof(char *));
	if (!strings)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if ((s[i] == c || i == ft_strlen (s)) && start >= 0)
		{
			strings[j] = ft_create_str(s, start, i);
			if (!(strings[j]))
				return (ft_free(strings, j));
			start = -1;
			j++;
		}
		else if (s[i] != c && start < 0)
			start = i;
	}
	return (strings);
}
