/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 21:28:40 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/21 15:38:14 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_a(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!b || !*b)
		return ;
	temp = *b;
	*b = (*b)->next;
	temp->next = *a;
	*a = temp;
}

void	pa(t_list **a, t_list **b)
{
	push_a(a, b);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	push_a(b, a);
	write(1, "pb\n", 3);
}
