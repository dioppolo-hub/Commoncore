/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioppolo <dioppolo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 12:40:52 by dioppolo          #+#    #+#             */
/*   Updated: 2025/12/11 13:01:58 by dioppolo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list* nuovo = NULL;

	nuovo = malloc(sizeof(t_list));
	nuovo->content = NULL;
	nuovo->next = new;
	new = nuovo;
}

int		main()
{
	t_list **lst;
	t_list *new;
	ft_lstadd_front(lst, new);

	printf("next: %p\n", new->next);
}