/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:37:14 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/21 15:38:34 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_list **n)
{
	int	tmp;

	tmp = (*n)->content;
	if (!n || !*n || !(*n)->next)
		return ;
	(*n)->content = (*n)->next->content;
	(*n)->next->content = tmp;
}

void	sa(t_list **n)
{
	swap(n);
	write(1, "sa\n", 3);
}

void	sb(t_list **n)
{
	swap(n);
	write(1, "sb\n", 3);
}

void	ss(t_list **n, t_list **m)
{
	swap(n);
	swap(m);
	write(1, "ss\n", 3);
}
