/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/20 22:07:12 by aycami            #+#    #+#             */
/*   Updated: 2024/07/23 01:10:52 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>

void	ft_putchar(char c, int o)
{
	write(o, &c, 1);
}

int	ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str, int out, int len)
{
	int		i;

	if (len == 0)
		len = ft_strlen(str);
	i = -1;
	while (++i < len)
		ft_putchar(str[i], out);
}

void	ft_read(char *filepath)
{
	int		file;
	int		size;
	char	buf[4097];

	file = open(filepath, O_RDONLY);
	if (file != -1)
	{
		size = read(file, buf, 4096);
		while (size != 0)
		{
			ft_putstr(buf, 1, size);
			size = read(file, buf, 4096);
		}
	}
	else
		ft_putstr("Cannot read file.\n", 2, 0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		ft_putstr("File name missing.\n", 2, 0);
	else if (argc != 2)
		ft_putstr("Too many arguments.\n", 2, 0);
	else
		ft_read(argv[1]);
}
