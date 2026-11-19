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

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/* int	main(void)
{
	t_list	*lst;
	t_list	*new;

	new = ft_lstnew("7");
	lst = ft_lstnew("1");
	lst->next = ft_lstnew("2");
	lst->next->next = ft_lstnew("3");
	lst->next->next->next = ft_lstnew("4");
	lst->next->next->next->next = ft_lstnew("5");
	lst->next->next->next->next->next = ft_lstnew("6");

	ft_lstadd_back(&lst, new);
	printf("%dCount :\n", ft_lstsize(lst));
	while (lst != NULL)
	{
		printf("%s", (char *)lst->content);
		if (lst->next != NULL)
			printf(" -> ");
		printf("\n");
		lst = lst->next;
	}
	return (0);
} */