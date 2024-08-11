/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysesudecami <aysesudecami@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 23:40:50 by aycami            #+#    #+#             */
/*   Updated: 2024/08/09 12:47:09 by aysesudecam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] <= 'z' && str[i] >= 'a'))
		{
			str[i] -= 32;
		}
		else
			i++;
	}
	return (str);
}

int	main(void)
{
	char cdizi1[] = "adaUIhSaudDA";

	printf("%s\n", ft_strupcase(cdizi1));

	return (0);
}
