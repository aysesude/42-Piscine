/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 00:37:29 by aycami            #+#    #+#             */
/*   Updated: 2024/07/17 11:49:54 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;

	b = 0;
	while (b < (size - 1))
	{
		if (tab[b] > tab[b + 1])
		{
			a = tab[b];
			tab[b] = tab[b + 1];
			tab[b + 1] = a;
			b = 0;
		}
		else
			b++;
	}
}

int	main(void)
{
	int tab[9] = {30,5,2,3,4,8,16,20,24};
	ft_sort_int_tab(tab, 9);
	for(int i = 0; i < 9; i++)
	{
		printf("%d ", tab[i]); 
	}
}
