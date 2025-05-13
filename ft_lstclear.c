/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 22:15:39 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 19:43:21 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clst;
	t_list	*nex;

	clst = *lst;
	while (clst->next)
	{
		nex = clst->next;
		ft_lstdelone(clst, del);
		clst = nex;
	}
	ft_lstdelone(clst, del);
	*lst = 0;
}
