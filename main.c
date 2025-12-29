/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:03:46 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/29 15:35:49 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*copy_orig(t_list *t)
{
	t_list	*new;
	t_list	*last;
	t_list	*node;

	new = NULL;
	last = NULL;
	while (t)
	{
		node = add_node(t->content);
		if (!node)
		{
			list_clear(&t);
			return (NULL);
		}
		if (!new)
			new = node;
		else
			last->next = node;
		last = node;
		t = t->next;
	}
	return (new);
}

static t_list	*extramain(int argc, char **argv, t_list *t, t_list *node)
{
	int	args;

	args = 0;
	while (++args < argc)
	{
		node = (add_node(ft_atolong(argv[args])));
		if (!node)
		{
			list_clear(&t);
			return (0);
		}
		node_tolist(&t, node);
	}
	return (t);
}

static void	finalsort(t_list **t)
{
	t_list	*b;

	b = NULL;
	if (issorted(*t))
	{
		list_clear(t);
		return ;
	}
	if (ft_lstsize(t) <= 5)
	{
		if (ft_lstsize(t) == 2)
			twonums(t);
		if (ft_lstsize(t) == 3)
			threenums(t);
		if (ft_lstsize(t) == 4)
			fournums(t, &b);
		if (ft_lstsize(t) == 5)
			fivenums(t, &b);
	}
	else
		radixsort(t);
	list_clear(t);
}

int	main(int argc, char **argv)
{
	t_list	*t;
	t_list	*node;
	int		args;

	t = NULL;
	args = 0;
	node = NULL;
	if (argc <= 1)
		return (0);
	t = extramain(argc, argv, t, node);
	while (++args < argc)
	{
		if (!dupnum(&t) || !ftisdigit(argv[args])
			|| !ismaxormin(argv[args]) || !counter(argv[args]))
		{
			list_clear(&t);
			return (write(2, "Error\n", 6));
		}
	}
	finalsort(&t);
	return (0);
}
