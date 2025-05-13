/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:26:49 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 20:12:21 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*cs;

	if (!s)
		return (0);
	i = 0;
	cs = ((char *) s);
	while (cs[i])
	{
		if (cs[i] == c)
			return (&cs[i]);
		i++;
	}
	if (cs[i] == c)
		return (&cs[i]);
	return (0);
}
