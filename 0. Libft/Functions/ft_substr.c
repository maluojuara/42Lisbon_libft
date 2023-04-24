/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:42:41 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/23 21:22:30 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	int		i;

	if (s == NULL)
		return (NULL);
	sub = malloc((len + 1) * sizeof(char));
	if (sub == NULL)
		return (NULL);
	i = 0;
	if (start <= ft_strlen(s) && start >= 0)
	{
		while (len > 0 && s[start])
		{
		sub[i] = s[start];
		i++;
		start++;
		len--;
		}
	sub[i] = '\0';
	}
	return (sub);
}
