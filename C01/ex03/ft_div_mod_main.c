/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysesudecami <aysesudecami@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 00:34:08 by aycami            #+#    #+#             */
/*   Updated: 2024/08/09 12:44:25 by aysesudecam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

int	main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 5;
	ft_div_mod(a, b, div, mod);
	printf("%d\n", div);
	printf("%d", mod);
}
