/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:19:10 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/07 15:19:10 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*tira os espacos vazios ou outro elemento do comeco e do fim, s tirar do meio*/
/*itera enquanto for o elemento set, quando chegar, armazena e vai ate o final.
no final, ele volta ate achar de novo o set. depois faz um substr (substring)*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	a;

	if (s1 == NULL || set == NULL)
		return (0);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	a = ft_strlen(s1);
	while (a && ft_strchr(set, s1[a]))
		a--;
	return (ft_substr(s1, 0, a + 1));
}

/* #include <stdio.h>

int	main()
{
	char	*str;
	char	*ret;

	str = "ghj     kah elloahjjkj   ";
	ret = ft_strtrim(str, " ");
	printf("%s\n", ret);
	return (0);
}
 */
