/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 22:50:24 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 20:16:47 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long	num;
	int		i;
	int		s;

	num = 0;
	i = 0;
	s = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		s = (int)(str[i] == '-');
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
	{
		num = 10 * num + (long)(str[i] - '0');
		i++;
	}
	if (s)
		num *= -1;
	if (num < -2147483648 || num > 2147483647)
		return (0);
	return ((int) num);
}
