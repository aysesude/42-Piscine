/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:31:14 by aycami            #+#    #+#             */
/*   Updated: 2024/07/23 13:09:31 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*str;

	str = (int *)malloc(sizeof(int) * length);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		str[i] = (*f)(tab[i]);
		i++;
	}
	return (str);
}
