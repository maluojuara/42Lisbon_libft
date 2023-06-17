/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 16:39:36 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/16 16:36:08 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int nb)
{
	if (nb >= 'A' && nb <= 'Z')
		return (1);
	if (nb >= 'a' && nb <= 'z')
		return (1);
	return (0);
}

/*
Testing the function:

#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char    c = 'i';
    printf("The result of my function is %d \n", ft_isalpha(c));
    printf ("The result of the original function is %d \n", isalpha(c));

    return (0);
}
*/
