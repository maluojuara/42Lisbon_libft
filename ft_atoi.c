/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 20:35:49 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/10 23:00:41 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*ascii to int*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	const char	*p;
	int			sign;
	int			exit;

	sign = 1;
	exit = 0;
	p = str;
	while (*p == '\t' || *p == '\n' || *p == '\v'
		|| *p == '\f' || *p == '\r' || *p == ' ')
			p++;
	if (*p == '+' || *p == '-')
	{
		if (*p == '-')
			sign = -1;
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		exit *= 10;
		exit = exit + (*p - 48);
		p++;
	}
	return (exit * sign);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char str[] = "12345";
    printf("original atoi: %d\n", atoi(str));
	printf("my atoi: %d \n", ft_atoi(str));
    return 0;
}*/
