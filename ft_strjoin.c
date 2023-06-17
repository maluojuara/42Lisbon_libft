/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 22:27:47 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/09 15:33:48 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	out = (char *)malloc((len + 1) * sizeof(char));
	if (out == NULL)
		return (0);
	ft_memcpy(out, s1, ft_strlen(s1));
	ft_memcpy(out + ft_strlen(s1), s2, ft_strlen(s2));
	out[len] = '\0';
	return (out);
}
