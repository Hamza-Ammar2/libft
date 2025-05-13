/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:29:13 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 20:14:46 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*cs;

	i = 0;
	cs = (char *) s;
	while (cs[i])
		i++;
	while (i >= 0)
	{
		if (cs[i] == c)
			return (&cs[i]);
		i--;
	}
	return (0);
}
