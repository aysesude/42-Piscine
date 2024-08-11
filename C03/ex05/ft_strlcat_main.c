/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysesudecami <aysesudecami@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 04:56:55 by aycami            #+#    #+#             */
/*   Updated: 2024/08/09 12:48:30 by aysesudecam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	dlen = j;
	slen = 0;
	while (dest[slen])
		slen++;
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

int	main (void)
{
	char	dest[] = "sfjjkasdf";
	char	src[] = "Aalksdjalkjdlkasd";

	// printf("%i \n", ft_strlcat(dest, src, 90));
	printf("%lu \n", strlcat(dest, src, 2));
	printf("%s \n", dest);
}
