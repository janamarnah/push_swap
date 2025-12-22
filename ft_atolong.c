/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atolongc                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:23:56 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/20 18:02:56 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atolong(const char *nptr)
{
	int				i;
	long			c;
	int				sign;
	char			*str;

	i = 0;
	c = 0;
	sign = 1;
	str = (char *)nptr;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\r'
		|| str[i] == '\n' || str[i] == '\v' || str[i] == '\f')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = sign * -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		c = c * 10 + (str[i] - 48);
		i++;
	}
	return (c * sign);
}
