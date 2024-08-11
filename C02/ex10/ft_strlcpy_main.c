/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 00:12:48 by aycami            #+#    #+#             */
/*   Updated: 2024/07/09 22:45:53 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (src[b])
	{
		b++;
	}
	if (size == 0)
		return (b);
	if (size != 0)
	{
		while ((src[a]) && (a < (size - 1)))
		{
			dest[a] = src[a];
			a++;
		}
		dest[a] = '\0';
	}
	return (b);
}


int	main(void)
{
	char	src[] = "abcdeffgnhfghnfdgngh";
	char	dest[8];
	int		size = 5;
	int		x;

	x = ft_strlcpy(dest, src, size);
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);
	printf("size: %i\n", x);
}
