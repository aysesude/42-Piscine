/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 11:01:45 by aycami            #+#    #+#             */
/*   Updated: 2024/07/16 21:27:06 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	ft_str_length(char *str)
{
	int	a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*dizi;

	i = 0;
	dizi = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	if (!dizi)
		return (0);
	while (src[i])
	{
		dizi[i] = src[i];
		i++;
	}
	dizi[i] = '\0';
	return (dizi);
}
