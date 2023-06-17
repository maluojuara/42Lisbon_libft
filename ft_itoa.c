/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 17:02:26 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/28 22:17:24 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size(int n)
{
	int	s;

	if (n <= 0)
	{
		n = -n;
		s = 1;
	}
	else
		s = 0;
	while (n > 0)
	{
		s++;
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	int		digits;
	char	*out;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	digits = size(n);
	out = (char *)malloc((digits + 1) * sizeof(char));
	if (out == NULL)
		return (NULL);
	if (n < 0)
	{
		out[0] = '-';
		n = -n;
	}
	out[digits] = '\0';
	while (n > 0)
	{
		out[digits - 1] = (n % 10) + 48;
		n = n / 10;
		digits--;
	}
	return (out);
}

/* #include <stdio.h>

int	main(void)
{
    int number = -623;
    char *string = ft_itoa(number);
    printf("O número %d convertido em string é: %s\n", number, string);
    free(string);
    return (0);
} */
