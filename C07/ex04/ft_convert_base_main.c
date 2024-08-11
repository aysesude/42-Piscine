/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aycami <aycami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 18:54:24 by aycami            #+#    #+#             */
/*   Updated: 2024/07/17 00:30:13 by aycami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_strlen(char *str);
int		ft_power(int n, int p);
char	*ft_putnbr_base(int nbr, char *base, int is_neg);

int	check_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j] || base[j] == '+' || base[j] == '-'
				|| base[j] == ' ' || base[j] == '\t' || base[j] == '\n'
				|| base[j] == '\v' || base[j] == '\f' || base[j] == '\r')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

char	*check_sign(char *str, int *is_neg)
{
	*is_neg = 1;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			*is_neg *= -1;
		str++;
	}
	return (str);
}

char	*ft_atoi(char *str, char *base, int *is_neg, int *size)
{
	int	i;
	int	j;
	int	valid;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n'
		|| *str == '\v' || *str == '\f' || *str == '\r')
		str++;
	str = check_sign(str, is_neg);
	while (*str != '\0')
	{
		j = -1;
		valid = 0;
		while (base[++j] != '\0')
			if (*str == base[j])
				valid = 1;
		if (valid == 0)
			break ;
		str++;
		i++;
	}
	*size = i;
	return (str - i);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long int	nb;
	int			is_neg;
	int			size;
	int			ps;
	int			n;

	nb = 0;
	ps = 0;
	nbr = ft_atoi(nbr, base_from, &is_neg, &size);
	if (check_valid(base_from) == 0 || check_valid(base_to) == 0)
		return (NULL);
	while (ps < size)
	{
		n = 0;
		while (base_from[n] != nbr[ps])
			n++;
		nb += n * ft_power(ft_strlen(base_from), (size - ps - 1));
		ps++;
	}
	return (ft_putnbr_base(nb, base_to, is_neg));
}

int	main(void)
{
	char *result;

    // Test 1: Decimal to Binary
    result = ft_convert_base("42", "0123456789", "01");
    if (result) {
        printf("42 (decimal) -> %s (binary)\n", result);
        free(result);
    } else {
        printf("Invalid base\n");
    }

    // Test 2: Binary to Decimal
    result = ft_convert_base("101010", "01", "0123456789");
    if (result) {
        printf("101010 (binary) -> %s (decimal)\n", result);
        free(result);
    } else {
        printf("Invalid base\n");
    }

    // Test 3: Decimal to Hexadecimal
    result = ft_convert_base("255", "0123456789", "0123456789ABCDEF");
    if (result) {
        printf("255 (decimal) -> %s (hexadecimal)\n", result);
        free(result);
    } else {
        printf("Invalid base\n");
    }

    // Test 4: Hexadecimal to Decimal
    result = ft_convert_base("FF", "0123456789ABCDEF", "0123456789");
    if (result) {
        printf("FF (hexadecimal) -> %s (decimal)\n", result);
        free(result);
    } else {
        printf("Invalid base\n");
    }

    // Test 5: Octal to Decimal
    result = ft_convert_base("77", "01234567", "0123456789");
    if (result) {
        printf("77 (octal) -> %s (decimal)\n", result);
        free(result);
    } else {
        printf("Invalid base\n");
    }

    // Test 6: Invalid base
    result = ft_convert_base("42", "01234+56789", "01");
    if (result) {
        printf("42 (decimal) -> %s (binary)\n", result);
        free(result);
    } else {
        printf("Invalid base\n");
    }

    return 0;
}
