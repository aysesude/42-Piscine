/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 23:55:37 by aycami            #+#    #+#             */
/*   Updated: 2024/07/10 01:55:04 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	while (i < nb / 2)
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb <= 1)
	{
		return (2);
	}
	while (1)
	{
		if (ft_is_prime(nb + i) == 1)
			return (nb + i);
		i++;
	}
}
int	main(void)
{
	printf("%d", ft_find_next_prime(1));
	return (0);
}
