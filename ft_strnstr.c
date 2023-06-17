/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 19:27:03 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/10 23:23:05 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *lit, size_t len)
{
	size_t	b;
	size_t	l;

	if (ft_strlen(lit) == 0)
		return ((char *)big);
	b = 0;
	while (b < len && big[b])
	{
		l = 0;
		while (lit[l] && (big[b + l] == lit[l]) && ((b + l) < len))
			l++;
		if (lit[l] == '\0')
			return ((char *)&big[b]);
		b++;
	}
	return (NULL);
}
/*encontrar uma string dentro da outra*/
