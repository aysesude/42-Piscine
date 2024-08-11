/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:23:13 by aycami            #+#    #+#             */
/*   Updated: 2024/07/06 23:25:17 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (!(str[i]))
	{
		return (1);
	}
	while (str[i])
	{
		if (!(str[i] <= 'Z' && str[i] >= 'A'))
			return (0);
		else
			i++;
	}
	return (1);
}

int	main(void)
{
	char cdizi1[] = "";

	printf("%d", ft_str_is_uppercase(cdizi1));

	return (0);
}