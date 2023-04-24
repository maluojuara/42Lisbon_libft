/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 17:24:41 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/16 19:26:53 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int nb)
{
	if (nb >= 0 && nb <= 127)
		return (1);
	return (0);
}

/*
#include<stdio.h>
#include<ctype.h>

int main(void)
{
    printf("The result of my function is %d \n", ft_isascii(27));
    printf ("The result of the original function is %d \n", isascii(27));
	printf("The result of my function is %d \n", ft_isascii(INT_MAX));
	printf ("The result of the original function is %d \n", isascii(INT_MAX));
	printf("The result of my function is %d \n", ft_isascii(INT_MIN));
	printf ("The result of the original function is %d \n", isascii(INT_MIN));

    return (0);
} */
