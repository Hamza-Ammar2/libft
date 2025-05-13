/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:09:04 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 19:49:42 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*cd;
	unsigned char	*cs;

	cs = (unsigned char *) src;
	cd = (unsigned char *) dest;
	if (cd == cs)
		return (dest);
	if (cd < cs)
	{
		i = 0;
		while (i < n)
		{
			cd[i] = cs[i];
			i++;
		}
	}
	else
	{
		while (n--)
			cd[n] = cs[n];
	}
	return (dest);
}
