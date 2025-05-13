/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 20:27:57 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 20:11:36 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	c_w(char *s, char c)
{
	int		count;
	int		start;

	count = 0;
	start = 1;
	while (*s)
	{
		if (*s != c)
		{
			if (start)
				count++;
			start = 0;
		}
		else
			start = 1;
		s++;
	}
	return (count);
}

static int	free_splits(char **s)
{
	char	**split;

	split = s;
	while (*split)
	{
		free(*split);
		split++;
	}
	free(s);
	return (0);
}

static int	cpy_word(char **dst, int index, char *s, char c)
{
	int		l;
	char	*word;

	l = 0;
	while (s[l] != c && s[l])
		l++;
	word = malloc((l + 1) * sizeof(char));
	if (!word)
		return (free_splits(dst));
	l = 0;
	while (s[l] != c && s[l])
	{
		word[l] = s[l];
		l++;
	}
	word[l] = '\0';
	dst[index] = word;
	return (l);
}

char	**ft_split(char const *s, char c)
{
	char	**splits;
	int		i;
	int		j;
	int		inc;

	if (!s)
		return (0);
	splits = malloc((c_w((char *) s, c) + 1) * sizeof(char *));
	if (!splits)
		return (0);
	j = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			inc = cpy_word(splits, j, &((char *) s)[i], c);
			if (!inc)
				return (0);
			i += inc - 1;
			j++;
		}
		i++;
	}
	return (splits[j] = 0, splits);
}
