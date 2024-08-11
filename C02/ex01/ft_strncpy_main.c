/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysesudecami <aysesudecami@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 19:13:04 by aycami            #+#    #+#             */
/*   Updated: 2024/08/09 12:46:23 by aysesudecam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (src[a] && a < n)
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a ++;
	}
	return (dest);
}

int	main(void)
{
	char cdizi1[] = "Denemedeneme";
	char cdizi2[] = "Deneme";

	ft_strncpy(cdizi1, cdizi2, 7);

	printf("cdizi1 içeriği: %s\n", cdizi1);

	return (0);
}
