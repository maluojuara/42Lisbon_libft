/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:48:43 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/07 21:48:43 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	nb;

	if (!lst)
		return (0);
	nb = 0;
	while (lst != NULL)
	{
		lst = lst -> next;
		nb++;
	}
	return (nb);
}
