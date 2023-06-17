/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcosta-d <mcosta-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/07 21:41:04 by mcosta-d          #+#    #+#             */
/*   Updated: 2023/05/07 21:41:04 by mcosta-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (0);
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}

/* #include <stdio.h>

int main()
{
	t_list	*list;
	t_list	*ptr;

	list = NULL;
	ptr = ft_lstnew("e ai");
	list = ptr;
	printf("elemento adicionado é %s\n", (char *)ptr->content);
	return (0);
}
 */
