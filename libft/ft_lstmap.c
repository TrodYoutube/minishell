/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timrouss <timrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 14:55:27 by timrouss          #+#    #+#             */
/*   Updated: 2026/10/14 16:08:57 by timrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_nodes;
	t_list	*new_map;
	void	*content;

	if (!lst || !f || !del)
		return (NULL);
	new_map = NULL;
	while (lst)
	{
		content = f(lst->content);
		new_nodes = ft_lstnew(content);
		if (!new_nodes)
		{
			del(content);
			ft_lstclear(&new_map, del);
			return (NULL);
		}
		ft_lstadd_back(&new_map, new_nodes);
		lst = lst->next;
	}
	return (new_map);
}
