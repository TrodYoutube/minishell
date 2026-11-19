/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timrouss <timrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:30:40 by timrouss          #+#    #+#             */
/*   Updated: 2026/10/14 13:14:25 by timrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*str1;
	char		*str2;

	str1 = src;
	str2 = dest;
	while (n)
	{
		*str2 = *str1;
		n--;
		str1++;
		str2++;
	}
	return (dest);
}

/* int	main(void)
{
	char src[] = "Bonjour";
	char dest[8];
	char dest2[8];
	ft_memcpy(dest2, src, 8);
	memcpy(dest, src, 8);
	printf("%s\n", dest2);
	printf("%s\n", dest);
} */