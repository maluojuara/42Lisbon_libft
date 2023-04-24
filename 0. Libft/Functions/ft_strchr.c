/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 19:40:26 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/23 18:58:29 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	if ((unsigned char)str[i] == (unsigned char)c)
		return ((char *)&str[i]);
	return (NULL);
}

/*
#include <stdio.h>
#include<string.h>

int main()
{
    const char str[] = "Hello, world!";
    char *result = ft_strchr(str, '\0');
	char *result2 = strchr(str, '\0');

    if (result == NULL)
    {
        printf("Character not found in mine\n");
    }

	if (result2 == NULL)
		printf("Character not found in original\n");
    else
    {
        printf("Mine: char found at pos: %ld\n", result - str);
		printf("Org: char found at pos: %ld\n", result2 - str);
    }

    return 0;
}*/
