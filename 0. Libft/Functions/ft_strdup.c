/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 20:27:14 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/04/23 20:38:54 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s);
	new = malloc(len * sizeof(char) + 1);
	if (new == NULL)
		return (NULL);
	while (*s)
	{
		*new = *s;
		s++;
		new++;
	}
	*new = '\0';
	return (new - len);
}
