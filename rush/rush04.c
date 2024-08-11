/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 10:35:38 by sakdil            #+#    #+#             */
/*   Updated: 2024/07/09 12:39:58 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	u;
	int	a;

	if (x <= 0 || y <= 0)
		return ;
	a = 1;
	while (a <= y)
	{
		u = 1;
		while (u <= x)
		{
			if ((u == 1 && a == 1) || (u == x && a == y))
				ft_putchar('A');
			else if ((u == 1 && a == y) || (u == x && a == 1))
				ft_putchar('C');
			else if ((u == 1) || (u == x) || (a == 1) || (a == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			u++;
		}
		ft_putchar('\n');
		a++;
	}
}
