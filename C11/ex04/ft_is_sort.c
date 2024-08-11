/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysesudecami <aysesudecami@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 11:40:12 by aycami            #+#    #+#             */
/*   Updated: 2024/08/09 12:51:07 by aysesudecam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int lenght, int (*f)(int, int))
{
	int		i;
	int		a;
	int		b;

	i = 0;
	a = 0;
	b = 0;
	while (i < lenght - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) >= 0)
			a++;
		if ((*f)(tab[i], tab[i + 1]) <= 0)
			b++;
		i++;
	}
	if (a == i || b == i)
		return (1);
	return (0);
}
