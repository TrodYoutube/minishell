/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timrouss <timrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:30:40 by timrouss          #+#    #+#             */
/*   Updated: 2026/10/14 13:16:41 by timrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int character)
{
	if ('\0')
		return (-1);
	if (character >= 'A' && character <= 'Z')
	{
		character += 32;
	}
	return (character);
}

/* int	main(void)
{
	printf("%d\n", tolower(65));
	printf("%d\n", ft_tolower(65));
} */
