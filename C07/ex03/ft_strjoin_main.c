/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:54:21 by aycami            #+#    #+#             */
/*   Updated: 2024/07/17 00:30:31 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		*dest = src[i];
		i++;
		dest++;
	}
	return (dest);
}

int	return_lenght(int size, char **strs, int size_sep)
{
	int	i;
	int	len;

	i = -1;
	len = size_sep * -1;
	while (++i < size)
		len += size_sep + ft_strlen(strs[i]);
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*res;
	int		len;

	if (size == 0)
	{
		res = (char *)malloc(1);
		return (res);
	}
	len = return_lenght(size, strs, ft_strlen(sep));
	i = -1;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (0);
	while (++i < size)
	{
		res = ft_strcpy(res, strs[i]);
		if (i + 1 < size)
			res = ft_strcpy(res, sep);
	}
	*res = '\0';
	return (res - len);
}

int	main(void)
{
	char	*tab[4];

	tab[0] = "Deneme";
	tab[1] = "AKJSDKLA";
	tab[2] = "aklskd";
	tab[3] = " aksj lkasl aklsm";
	printf("%s", ft_strjoin(4, tab, "aralar"));
	return (0);
}
