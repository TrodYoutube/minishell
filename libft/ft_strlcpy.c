/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timrouss <timrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:30:40 by timrouss          #+#    #+#             */
/*   Updated: 2026/10/14 14:50:32 by timrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	size_src;
	size_t	i;

	size_src = ft_strlen(src);
	if (size == 0)
		return (size_src);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (size_src);
}

/* int main(void)
{
	int i = 0;
	int	j = 0;
	char	buff[10] = "jour";
	char	buff2[10] = "jour";
	char	src[] = "Bonjour";

	i = ft_strlcpy(buff, src, 0);
	j = strlcpy(buff, src, 0);
	
	strlcpy(buff, src, 6);
	ft_strlcpy(buff2, src, 6);
	printf("%s\n", buff);
	printf("%s\n", buff2);
	printf("%d\n", i);
	printf("%d\n", j);
	return (0);
} */