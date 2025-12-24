/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:02:59 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/24 17:54:26 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	counter(char *t)
{
	int	i;
	int	counter;

	counter = 0;
	i = 0;
	if (!t[i])
		return (0);
	if (t[i] == '-' || t[i] == '+')
		i++;
	while (t[i] == '0')
		i++;
	while (t[i])
	{
		counter++;
		i++;
	}
	if (counter > 10)
		return (0);
	return (1);
}

int	ftisdigit(char *t)
{
	int	i;

	i = 0;
	while (t[i] == ' ' || t[i] == '\t' || t[i] == '\r'
		|| t[i] == '\n' || t[i] == '\v' || t[i] == '\f')
		i++;
	if (t[i] == '-' || t[i] == '+')
		i++;
	if (!t[i])
		return (0);
	while (t[i])
	{
		if (t[i] < '0' || t[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	ismaxormin(char *t)
{
	int		i;
	long	x;

	i = 0;
	x = ft_atolong(t);
	if (x >= INT_MIN && x <= INT_MAX)
		return (1);
	return (0);
}

int	dupnum(t_list **t)
{
	t_list	*tmp;
	t_list	*tmptwo;

	if (!t || !(*t))
		return (0);
	tmp = (*t);
	while (tmp->next)
	{
		tmptwo = tmp->next;
		while (tmptwo)
		{
			if (tmp->content == tmptwo->content)
				return (0);
			tmptwo = tmptwo->next;
		}
		tmp = tmp->next;
	}
	return (1);
}

int	issorted(t_list *t)
{
	if (!t || !t->next)
		return (1);
	while (t->next)
	{
		if (t->next->content < t->content)
			return (0);
		t = t->next;
	}
	return (1);
}
