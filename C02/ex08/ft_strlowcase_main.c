/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysesudecami <aysesudecami@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:46:36 by aycami            #+#    #+#             */
/*   Updated: 2024/08/09 12:47:20 by aysesudecam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 'Z' && str[i] >= 'A'))
		{
			str[i] += 32;
		}
		else
			i++;
	}
	return (str);
}

int	main(void)
{
	char cdizi1[] = "asIJoSS";

	printf("%s\n", ft_strlowcase(cdizi1));

	return (0);
}
