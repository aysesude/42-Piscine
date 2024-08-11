/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha_main.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysesudecami <aysesudecami@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 22:57:44 by aycami            #+#    #+#             */
/*   Updated: 2024/08/09 12:46:36 by aysesudecam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (!(str[i]))
	{
		return (1);
	}
	while (str[i])
	{
		if (!((str[i] <= 'z' && str[i] >= 'a')
				|| (str[i] <= 'Z' && str[i] >= 'A')))
			return (0);
		else
			i++;
	}
	return (1);
}

int	main(void)
{
	char cdizi1[] = "aserfja3r4f453sfd";

	printf("%d", ft_str_is_alpha(cdizi1));

	return (0);
}
