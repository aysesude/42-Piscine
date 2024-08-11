/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 00:21:31 by aysesudecam       #+#    #+#             */
/*   Updated: 2024/07/09 12:29:47 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr_base_ek(int nbr, char *base, int size)
{
	char	a;

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= (-1);
	}
	if (nbr >= size)
		ft_putnbr_base_ek(nbr / size, base, size);
	a = base[nbr % size];
	write(1, &a, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	s;
	int	i;
	int	j;

	i = 0;
	s = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == '\0')
			return ;
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return ;
			j++;
		}
		i++;
	}
	if (i <= 1)
		return ;
	while (base[s])
		s++;
	ft_putnbr_base_ek(nbr, base, s);
}

int	main(void)
{
	ft_putnbr_base(42, "01");
	printf("\n");

	ft_putnbr_base(42, "01234567");
	printf("\n");

	ft_putnbr_base(42, "0123456789ABCDEF");
	printf("\n");

	ft_putnbr_base(-42, "01");
	printf("\n");

	ft_putnbr_base(-42, "01234567");
	printf("\n");

	ft_putnbr_base(-42, "0123456789ABCDEF");
	printf("\n");

	ft_putnbr_base(42, "poneyvif");
	printf("\n");

	ft_putnbr_base(42, "012345+6789");
	printf("\n");

	ft_putnbr_base(42, "01234567890");
	printf("\n");

	ft_putnbr_base(42, "0");
	printf("\n");

	return (0);
}
