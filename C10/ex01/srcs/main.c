/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 01:14:51 by aycami            #+#    #+#             */
/*   Updated: 2024/07/23 01:16:49 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	main(int argc, char **argv)
{
	int		i;

	if (argc == 1)
		no_args(argv);
	else
	{
		i = 0;
		while (++i < argc)
		{
			if (ft_file_read(argv[i]) == 0)
			{
				ft_putstr(basename(argv[0]), 2);
				ft_putstr(": ", 2);
				ft_putstr(argv[i], 2);
				ft_putstr(": ", 2);
				ft_putstr(strerror(errno), 2);
				ft_putchar('\n', 2);
			}
		}
	}
}
