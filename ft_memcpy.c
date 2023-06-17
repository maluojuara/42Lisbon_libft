/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 12:47:54 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/07 15:47:50 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	if (dest == NULL && src == NULL)
		return (0);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

void *ft_memcpy(void *dest, const void *src, size_t n);

int main(void)
{
    char src[] = "Hello, world!";
    char dest[20];

    ft_memcpy(dest, src, 6);
    dest[6] = '\0';
    printf("my dest is: %s\n", dest);


	char src1[] = "Hello, world!";
    char dest1[20];

    memcpy(dest1, src1, 6);
    dest[6] = '\0';
    printf("original dest is: %s\n", dest1);

    return 0;
}
*/
