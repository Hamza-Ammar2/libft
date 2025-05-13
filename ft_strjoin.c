/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 19:34:18 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 20:13:08 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;
	int		l1;
	int		l2;

	l1 = 0;
	l2 = 0;
	s = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!s)
		return (s);
	while (s1[l1])
	{
		s[l1] = s1[l1];
		l1++;
	}
	while (s2[l2])
	{
		s[l1 + l2] = s2[l2];
		l2++;
	}
	s[l1 + l2] = '\0';
	return (s);
}
