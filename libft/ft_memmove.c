/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timrouss <timrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:30:40 by timrouss          #+#    #+#             */
/*   Updated: 2026/10/14 13:14:31 by timrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*str1;
	char		*str2;

	str1 = src;
	str2 = dest;
	if (str2 < str1)
	{
		while (n)
		{
			*str2++ = *str1++;
			n--;
		}
	}
	else if (str2 > str1)
	{
		while (n)
		{
			n--;
			str2[n] = str1[n];
		}
	}
	return (dest);
}

/* int	main(void)
{
	char a[] = "987654321";
	char b[] = "987654321";

	ft_memmove(a + 2, a, 5);
	memmove(b + 2, b, 5);
	printf("%s\n", a);
	printf("%s\n", b);
} */