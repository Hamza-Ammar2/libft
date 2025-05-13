/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 00:22:42 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 20:18:49 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	func(long n, int fd)
{
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
		func(n / 10, fd);
	ft_putchar_fd((char)((int)(n % 10) + '0'), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	func((long) n, fd);
}
