/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 21:09:44 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 19:42:07 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	long	nl;
	int		l;

	l = (n <= 0) + 0;
	nl = (long) n;
	while (n != 0)
	{
		l++;
		n /= 10;
	}
	str = malloc((l + 1) * sizeof(char));
	if (!str)
		return (0);
	str[l] = '\0';
	str[0] = '-' * (nl < 0) + '0' * (nl == 0);
	nl = nl - 2 * nl * (nl < 0);
	while (nl > 0)
	{
		str[--l] = (nl % 10) + '0';
		nl /= 10;
	}
	return (str);
}
