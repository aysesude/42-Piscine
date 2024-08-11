/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:58:12 by aycami            #+#    #+#             */
/*   Updated: 2024/07/22 13:58:13 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_file_count(char *filepath)
{
	int		file;
	int		size;
	int		sizetot;
	char	buf[__BUFF];

	file = open(filepath, O_RDWR);
	if (file != -1)
	{
		sizetot = 0;
		size = read(file, buf, __BUFF);
		while (size != 0)
		{
			sizetot += size;
			size = read(file, buf, __BUFF);
		}
		return (sizetot);
	}
	else
		return (-1);
}

void	ft_file_get(char *filepath, int sizetot, int size)
{
	int		i;
	int		bufsize;
	int		file;
	char	buf[__BUFF];

	file = open(filepath, O_RDWR);
	i = 0;
	bufsize = read(file, buf, __BUFF);
	while (bufsize != 0 && ((i + 1) * __BUFF < sizetot - size))
	{
		i++;
		bufsize = read(file, buf, __BUFF);
	}
	if (size >= sizetot)
		i = -1;
	else
		i = (sizetot - size) - (i * __BUFF) - 1;
	while (++i < __BUFF && i < bufsize)
		ft_putchar(buf[i], 1);
	bufsize = read(file, buf, __BUFF);
	while (bufsize != 0)
	{
		ft_putstr_buf(buf, bufsize);
		bufsize = read(file, buf, __BUFF);
	}
}
