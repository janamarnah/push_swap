/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort4to5.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/23 15:44:16 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/24 17:56:25 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*findmin(t_list **t)
{
	t_list	*tmp;
	t_list	*min;

	if (!t || !*t)
		return (NULL);
	tmp = (*t);
	min = (*t);
	while (tmp)
	{
		if (tmp->content < min->content)
			min = tmp;
		tmp = tmp->next;
	}
	return (min);
}

void	fournums(t_list **t, t_list	**b)
{
	t_list	*tmp;
	t_list	*min;
	int		i;

	tmp = (*t);
	min = findmin(t);
	i = 0;
	while (tmp && tmp != min)
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= 2)
		while ((*t) != min)
			ra(t);
	else
		while ((*t) != min)
			rra(t);
	pb(t, b);
	threenums(t);
	pa(t, b);
}

void	fivenums(t_list **t, t_list	**b)
{
	t_list	*tmp;
	t_list	*min;
	int		i;

	tmp = (*t);
	min = findmin(t);
	i = 0;
	while (tmp && tmp != min)
	{
		i++;
		tmp = tmp->next;
	}
	if (i <= 2)
		while ((*t) != min)
			ra(t);
	else
		while ((*t) != min)
			rra(t);
	pb(t, b);
	fournums(t, b);
	pa(t, b);
}
