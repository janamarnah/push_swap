/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2to3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/21 19:34:59 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/21 19:54:01 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	twonums(t_list **t)
{
	sa(t);
}

void	threenums(t_list **t)
{
	if ((*t)->content < (*t)->next->content)
	{
		sa(t);
		ra(t);
	}
	if ((*t)->content > (*t)->next->content)
	{
		if ((*t)->content < (*t)->next->next->content)
			sa(t);
		else if ((*t)->content > (*t)->next->next->content
			&& (*t)->next->content < (*t)->next->next->content)
			ra(t);
		else
		{
			sa(t);
			rra(t);
		}
	}
	else
		rra(t);
}
