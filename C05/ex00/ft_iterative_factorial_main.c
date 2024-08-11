/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:43:10 by aycami            #+#    #+#             */
/*   Updated: 2024/07/10 06:12:30 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb == 0)
		a = 1;
	while (nb >= 1)
	{
		a *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (a);
}

int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
}
