/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:20:36 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/10 23:01:14 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*zera toda a memoria - da memset para 0*/

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	ft_memset(ptr, 0, n);
}

/*
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[20] = "Hello, world!";
	printf ("Before ft_bzero: %s \n", str);
    ft_bzero(str, 1);
    printf("After ft_bzero: %s\n", str);

    char str2[20] = "Hello, world!";
	printf ("Before bzero: %s \n", str2);
    bzero(str2, 1);
    printf("Using bzero: %s\n", str2);

    return 0;
}
*/
