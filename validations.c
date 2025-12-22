/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 20:02:59 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/21 15:48:32 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	counter(char *t)
{
	int	i;
	int	counter;

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

int	isdigit(char *t)
{
	int	i;

	i = 0;
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

int	dupnum(char *t)
{
	int		i;
	int		j;
	long	x;
	long	y;

	i = 0;
	if (!t)
		return (0);
	while (t[i])
	{
		x = ft_atolong(t[i]);
		j = i + 1;
		while (t[j])
		{
			y = ft_atolong(t[j]);
			if (x == y)
				return (0);
			j++;
		}
		i++;
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


