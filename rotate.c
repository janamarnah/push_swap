/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 18:52:31 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/21 15:38:22 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_list **n)
{
	t_list	*one;
	t_list	*two;

	if (!n || !*n || !(*n)->next)
		return ;
	one = *n;
	*n = one->next;
	one->next = 0;
	two = *n;
	while (two->next)
		two = two->next;
	two->next = one;
}

void	ra(t_list **n)
{
	rotate(n);
	write(1, "ra\n", 3);
}

void	rb(t_list **n)
{
	rotate(n);
	write(1, "rb\n", 3);
}

void	rr(t_list **n, t_list **m)
{
	rotate(n);
	rotate(m);
	write(1, "rr\n", 3);
}
