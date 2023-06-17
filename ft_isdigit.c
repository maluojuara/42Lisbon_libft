/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 16:20:23 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/16 19:28:38 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int nb)
{
	if (nb >= '0' && nb <= '9')
		return (1);
	return (0);
}

/*
//Testing the function:

#include<stdio.h>
#include<ctype.h>

int main(void)
{
    char    c = '9';
    printf("The result of my function is %d \n", ft_isdigit(c));
    printf ("The result of the original function is %d \n", isdigit(c));

    return (0);
}
*/
