/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 23:19:42 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 20:14:13 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	l;

	if (!s || !f)
		return (0);
	l = ft_strlen(s);
	str = malloc((l + 1) * sizeof(char));
	if (!str)
		return (str);
	l = 0;
	while (s[l])
	{
		str[l] = f((unsigned int) l, s[l]);
		l++;
	}
	str[l] = '\0';
	return (str);
}
