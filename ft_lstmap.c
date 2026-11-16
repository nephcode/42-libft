/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neph <neph@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/02 15:48:27 by nepcohen          #+#    #+#             */
/*   Updated: 2026/11/16 00:58:08 by neph             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* PROG ===================================================================== */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*current;
	t_list	*temp;

	if (!lst || !del || !f)
		return (NULL);
	new = NULL;
	temp = NULL;
	while (lst)
	{
		current = ft_lstnew(f(lst->content));
		if (!current)
		{
			ft_lstclear(&new, del);
			return (NULL);
		}
		if (!new)
			new = current;
		else
			temp->next = current;
		temp = current;
		lst = lst->next;
	}
	return (new);
}
/* MAIN ===================================================================== */
/* END ====================================================================== */