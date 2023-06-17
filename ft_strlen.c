/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:43:07 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/21 18:13:46 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/*
#include<stdio.h>
#include<string.h>

int	main ()
{
	printf("The size of string in my function is: %lu \n", ft_strlen("malu"));
	printf("The size of string in the orgn function is: %lu \n", strlen("malu"));
	return (0);
}
*/
