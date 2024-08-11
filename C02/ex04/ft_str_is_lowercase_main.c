/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:21:32 by aycami            #+#    #+#             */
/*   Updated: 2024/07/07 03:34:17 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (!(str[i]))
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] <= 'z' && str[i] >= 'a'))
			return (0);
		else
			i++;
	}
	return (1);
}

int	main(void)
{
	char cdizi1[] = "aQd";

	printf("%d", ft_str_is_lowercase(cdizi1));

	return (0);
}
