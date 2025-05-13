/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 00:29:40 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 20:17:27 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void			*m;
	unsigned char	*mc;
	size_t			i;

	if (size == 0 || num == 0)
		return (0);
	if (num > __SIZE_MAX__ / size)
		return (0);
	m = malloc(num * size);
	if (!m)
		return (m);
	mc = (unsigned char *) m;
	i = 0;
	while (i < num * size)
	{
		mc[i] = 0;
		i++;
	}
	return (m);
}
