/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:00:58 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/17 12:36:01 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t n)
{
	unsigned char	*p;
	size_t			i;

	p = ptr;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

/*
#include<stdio.h>
#include<string.h>

int main()
{
    char str[20] = "Hello, world!";
    char *str2 = ft_memset(str, '*', 5);
    printf("Using ft_memset: %s\n", str2);

    char str3[20] = "Hello, world!";
    char *str4 = memset(str3, '*', 5);
    printf("Using memset: %s\n", str4);

    return (0);
} */
