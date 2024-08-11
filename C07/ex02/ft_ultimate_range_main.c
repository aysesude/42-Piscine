/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:54:19 by aycami            #+#    #+#             */
/*   Updated: 2024/07/16 18:57:12 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (max > min)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

int	main(void)
{
	int	*tab;
	int	size;
	int	i;

	i = 0;
	size = ft_ultimate_range(&tab, 5, 23);
	while (i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
