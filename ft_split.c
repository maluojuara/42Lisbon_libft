/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split_wrong.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 15:48:25 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/07 18:10:48 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_subs(char const *s, char c)
{
	int	sub;
	int	flag;

	sub = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			flag = 1;
			sub++;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (sub);
}

static int	word_len(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	int			i;
	int			j;
	int			k;

	i = 0;
	j = 0;
	result = (char **)malloc((count_subs(s, c) + 1) * sizeof(char *));
	if (!result)
		return (0);
	while (j < count_subs(s, c))
	{
		while (s[i] == c)
			i++;
		k = word_len(s, c, i);
		result[j] = ft_substr(s, i, k);
		if (!(result[j]))
			return (0);
		i += k;
		j++;
	}
	result[j] = NULL;
	return (result);
}
