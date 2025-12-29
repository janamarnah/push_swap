/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 16:06:43 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/29 15:36:10 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*add_node(long x)
{
	t_list	*t;

	t = malloc(sizeof(t_list));
	if (!t)
	{
		list_clear(&t);
		return (NULL);
	}
	t->content = x;
	t->next = NULL;
	return (t);
}

void	node_tolist(t_list **t, t_list *n)
{
	t_list	*tmp;

	if (!t || !n)
		return ;
	if (!*t)
	{
		*t = n;
		return ;
	}
	tmp = (*t);
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = n;
}

void	list_clear(t_list **t)
{
	t_list	*tmp;
	t_list	*save;

	if (!t || !*t)
		return ;
	tmp = (*t);
	while (tmp)
	{
		save = tmp->next;
		free(tmp);
		tmp = save;
	}
	(*t) = NULL;
}

int	ft_lstsize(t_list **t)
{
	int		i;
	t_list	*tmp;

	i = 0;
	if (!t || !*t)
		return (0);
	tmp = (*t);
	while (tmp)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
