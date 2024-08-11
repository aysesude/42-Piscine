/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 11:36:57 by aycami            #+#    #+#             */
/*   Updated: 2024/07/07 14:16:16 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (to_find[b] == '\0')
		return (str);
	while (str[a])
	{
		while (str[a + b] == to_find[b] && str[a + b] != '\0')
			b++;
		if (to_find[b] == '\0')
			return (str + a);
		a++;
		b = 0;
	}
	return (0);
}
