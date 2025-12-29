/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 20:50:24 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/20 21:11:00 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(t_list **n)
{
	t_list	*one;
	t_list	*two;

	if (!n || !*n || !(*n)->next)
		return ;
	one = *n;
	while (one->next)
	{
		two = one;
		one = one->next;
	}
	two->next = 0;
	one->next = *n;
	*n = one;
}

void	rra(t_list **n)
{
	reverse_rotate(n);
	write(1, "rra\n", 4);
}

void	rrb(t_list **n)
{
	reverse_rotate(n);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **n, t_list **m)
{
	reverse_rotate(n);
	reverse_rotate(m);
	write(1, "rrr\n", 4);
}
