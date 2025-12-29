/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 11:27:39 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/29 15:23:18 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	long	findindex(t_list **t, long node)
{
	t_list	*tmp;
	long	counter;

	if (!t || !*t)
		return (0);
	counter = 0;
	tmp = (*t);
	while (tmp)
	{
		if (node > tmp->content)
			counter++;
		tmp = tmp->next;
	}
	return (counter);
}

static t_list	*putindex(t_list **t)
{
	t_list	*tmp;
	t_list	*push;
	t_list	*orig;

	if (!t || !*t)
		return (NULL);
	push = copy_orig((*t));
	tmp = push;
	orig = (*t);
	while (tmp)
	{
		tmp->content = findindex(&orig, tmp->content);
		tmp = tmp->next;
	}
	list_clear(t);
	return (push);
}

static int	findmax(t_list **t)
{
	t_list	*tmp;
	int		max;
	int		readbits;

	if (!t || !*t)
		return (0);
	readbits = 0;
	tmp = (*t);
	max = tmp->content;
	while (tmp)
	{
		if (tmp->content > max)
			max = tmp->content;
		tmp = tmp->next;
	}
	while ((max >> readbits) != 0)
		readbits++;
	return (readbits);
}

static void	pushzeros(t_list **t, t_list **b)
{
	int		i;
	int		j;
	int		readbits;
	int		elements;

	readbits = findmax(t);
	i = 0;
	while (i < readbits)
	{
		j = 0;
		elements = ft_lstsize(t);
		while (j < elements)
		{
			if ((((*t)->content >> i) & 1) == 0)
				pb(t, b);
			else
				ra(t);
			j++;
		}
		while (*b)
			pa(t, b);
		i++;
	}
}

void	radixsort(t_list **t)
{
	t_list	*b;

	b = NULL;
	*t = putindex(t);
	pushzeros(t, &b);
}
