/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 19:29:34 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/16 19:36:25 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int nb)
{
	if (nb >= 32 && nb <= 126)
		return (1);
	return (0);
}

/*
#include<stdio.h>
#include<ctype.h>

int main(void)
{
    printf("The result of my function is %d \n", ft_isprint(' '));
    printf ("The result of the original function is %d \n", isprint(' '));

    return (0);
}
*/
