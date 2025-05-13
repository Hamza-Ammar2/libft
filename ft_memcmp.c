/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:38:54 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 19:48:34 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*cs1;
	unsigned char	*cs2;

	i = 0;
	cs1 = (unsigned char *) s1;
	cs2 = (unsigned char *) s2;
	while (i < n)
	{
		if (cs1[i] != cs2[i])
			return ((int)(cs1[i] - cs2[i]));
		i++;
	}
	return (0);
}
