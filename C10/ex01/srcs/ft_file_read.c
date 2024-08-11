/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 01:14:18 by aycami            #+#    #+#             */
/*   Updated: 2024/07/23 01:16:06 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft.h"

int	ft_file_read(char *filepath)
{
	int			file;
	int			size;
	char		buf[__BUFF];

	file = open(filepath, O_RDWR);
	if (file != -1)
	{
		size = read(file, buf, __BUFF);
		while (size != 0)
		{
			ft_putstr_buf(buf, size);
			size = read(file, buf, __BUFF);
		}
		return (1);
	}
	else
		return (0);
}
