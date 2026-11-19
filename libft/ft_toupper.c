/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: timrouss <timrouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/12 13:30:40 by timrouss          #+#    #+#             */
/*   Updated: 2026/10/14 13:09:04 by timrouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int character)
{
	if ('\0')
		return (-1);
	if (character >= 'a' && character <= 'z')
	{
		character -= 32;
	}
	return (character);
}

/* int	main(void)
{
	printf("%d\n", toupper(42));
	printf("%d\n", ft_toupper(42));
} */
