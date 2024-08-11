/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:54:17 by aycami            #+#    #+#             */
/*   Updated: 2024/07/16 18:55:39 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*dizi;

	i = 0;
	if (min >= max)
		return (0);
	dizi = (int *)malloc(sizeof(int) * (max - min));
	if (dizi == NULL)
		return (NULL);
	while (max > min)
	{
		dizi[i] = min;
		min++;
		i++;
	}
	return (dizi);
}

int	main(void)
{
	int	*tab;
	int	i;

	i = 0;
	tab = ft_range(4, 8);
	while (i < 4)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
