/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:03:46 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/24 19:42:22 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	finalsort(t_list **t)
{
	t_list	*b;

	b = NULL;
	if (issorted(*t))
		return ;
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
}

int	main(int argc, char **argv)
{
	t_list	*t;
	t_list	*node;
	int		args;

	t = NULL;
	args = 0;
	if (argc <= 1)
		return (0);
	while (++args < argc)
	{
		node = (add_node(ft_atolong(argv[args])));
		node_tolist(&t, node);
	}
	args = 0;
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
