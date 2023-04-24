/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:27:07 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/16 17:24:49 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int nb)
{
	if (ft_isalpha(nb) == 1)
		return (1);
	if (ft_isdigit(nb) == 1)
		return (1);
	return (0);
}

/*
// Testing the function:

#include<stdio.h>
#include<ctype.h>

int	main(void)
{
	char	c = '=';

	printf("The result of my function is %d \n", ft_isalnum(c));
	printf ("The result of the original function is %d \n", isalnum(c));
	return (0);
}
*/
