/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:59:26 by aycami            #+#    #+#             */
/*   Updated: 2024/07/22 13:59:29 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

void	print_file(int argc, char **args, int octet)
{
	int		i[2];
	int		size;

	i[0] = 0;
	i[1] = 0;
	while (args[++i[0]] != 0)
	{
		size = ft_file_count(args[i[0]]);
		if (size == -1)
		{
			if (errno != 21)
				print_error(args, i[0]);
		}
		else
		{
			if (argc > 4)
			{
				if (i[0] != 1 && i[1] != 0)
					ft_putchar('\n', 1);
				ft_putstr_headfile(args[i[0]]);
				i[1]++;
			}
			ft_file_get(args[i[0]], size, octet);
		}
	}
}

void	print_error(char **args, int i)
{
	ft_putstr(basename(args[0]), 2);
	ft_putstr(": ", 2);
	ft_putstr(args[i], 2);
	ft_putstr(": ", 2);
	ft_putstr(strerror(errno), 2);
	ft_putchar('\n', 2);
}

void	print_illegal(char *name, char *obj)
{
	ft_putstr(basename(name), 2);
	ft_putstr(": illegal offset -- ", 2);
	ft_putstr(obj, 2);
	ft_putchar('\n', 2);
}

void	print_help(char *name)
{
	ft_putstr(basename(name), 2);
	ft_putstr(": option require an argument -- c\nusage: ", 2);
	ft_putstr(basename(name), 2);
	ft_putstr(" [-F | -f | -r] [-q] [-b # | -c # | -n #] [file ...]\n", 2);
}
