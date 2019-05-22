/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mathomas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 14:08:04 by mathomas          #+#    #+#             */
/*   Updated: 2019/05/06 15:52:16 by mathomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*current;

	if (!lst || !f)
		return (NULL);
	new = NULL;
	while (lst)
	{
		if (new)
		{
			current->next = (*f)(lst);
			current = current->next;
		}
		else
		{
			new = (*f)(lst);
			current = new;
		}
		lst = lst->next;
	}
	return (new);
}
