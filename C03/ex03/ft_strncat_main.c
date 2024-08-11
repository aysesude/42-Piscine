/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:13:51 by aycami            #+#    #+#             */
/*   Updated: 2024/07/07 14:20:55 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[a] && a < nb)
	{
		dest[i + a] = src[a];
		a++;
	}
	dest[i + a] = '\0';
	return (dest);
}

int	main(void)
{
	char	cdizi1[10] = "ASDFG";
	char	cdizi2[5] = "asdgf";

	strncat(cdizi1, cdizi2, 2);

	printf("cdizi1 bellek içeriği: %s\n", cdizi1);

	return (0);
}
