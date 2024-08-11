/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 04:56:55 by aycami            #+#    #+#             */
/*   Updated: 2024/07/07 14:16:21 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	d;
	unsigned int	s;

	i = 0;
	j = 0;
	while (dest[j])
	{
		j++;
	}
	d = j;
	s = 0;
	while (src[s])
		s++;
	if (size == 0 || size <= d)
		return (s + size);
	while (src [i] && i < size - d - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (d + s);
}
