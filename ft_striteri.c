/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:22:59 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/07 15:22:59 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*#include<stdio.h>

void my_function(unsigned int i, char *c)
{
    if (*c == ' ')
        *c = '_';
}

int main(void)
{
    char my_string[] = "Hello, world!";
    printf("Original string: %s\n", my_string);
    ft_striteri(my_string, my_function);
    printf("Modified string: %s\n", my_string);
    return (0);
} */
