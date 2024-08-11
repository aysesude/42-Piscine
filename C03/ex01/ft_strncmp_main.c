/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 06:20:27 by aycami            #+#    #+#             */
/*   Updated: 2024/07/17 10:53:26 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (47835);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%d", ft_strncmp("ASDF", "asdf", 3));
	printf("\n%d", ft_strncmp("Hello", "He", 2));
	printf("\n%d", ft_strncmp("kllgsd", "kdsdfsd", 2));
	printf("\n%d", ft_strncmp("Hello", "Hello", 2));
}
