/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haammar <haammar@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/02 22:26:58 by haammar           #+#    #+#             */
/*   Updated: 2025/05/13 19:45:08 by haammar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*rm_lst(t_list **lst, void (*del)(void*))
{
	ft_lstclear(lst, del);
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void*), void (*del)(void*))
{
	t_list	*nlst;
	t_list	*nnex;

	if (!lst)
		return (0);
	nlst = malloc(sizeof(t_list));
	if (!nlst)
		return (0);
	nnex = nlst;
	while (lst)
	{
		nnex->content = f(lst->content);
		if (lst->next)
			nnex->next = malloc(sizeof(t_list));
		if ((!nnex->next && lst->next) || !nnex->content)
			rm_lst(&nlst, del);
		if (!lst->next)
			break ;
		nnex = nnex->next;
		lst = lst->next;
	}
	nnex->next = 0;
	return (nlst);
}
