/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysesudecami <aysesudecami@student.42.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:54:28 by aycami            #+#    #+#             */
/*   Updated: 2024/08/09 12:50:14 by aysesudecam      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	char_is_separator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (char_is_separator(str[i + 1], charset) == 1
			&& char_is_separator(str[i], charset) == 0)
			words++;
		i++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char *charset)
{
	int	i;

	i = 0;
	while (char_is_separator(from[i], charset) == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (char_is_separator(str[i], charset) == 1)
			i++;
		else
		{
			j = 0;
			while (char_is_separator(str[i + j], charset) == 0)
				j++;
			split[word] = (char *)malloc(sizeof(char) * (j + 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**res;
	int		words;

	words = count_words(str, charset);
	res = (char **)malloc(sizeof(char *) * (words + 1));
	if (res == NULL)
		return (NULL);
	res[words] = 0;
	write_split(res, str, charset);
	return (res);
}

int	main(void)
{
    char **result;
    char str[] = "Deneme, deneme. Deneme  .";
    char charset[] = " ,.";

    result = ft_split(str, charset);

    for (int i = 0; result[i] != 0; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);

    return 0;
}
