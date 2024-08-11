/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 23:47:22 by aycami            #+#    #+#             */
/*   Updated: 2024/07/10 06:10:06 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb / 2)
	{
		if ((nb % i) == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_is_prime(98));
	return (0);
}
