/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:03:10 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/21 19:54:45 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <unistd.h>

long	ft_atolong(const char *nptr);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	rra(t_list **n);
void	rrb(t_list **n);
void	rrr(t_list **n, t_list **m);
void	ra(t_list **n);
void	rb(t_list **n);
void	rr(t_list **n, t_list **m);
void	sa(t_list **n);
void	sb(t_list **n);
void	ss(t_list **n, t_list **m);
int		counter(char *t);
int		isdigit(char *t);
int		ismaxormin(char *t);
int		dupnum(char *t);
int		issorted(t_list *t);
void	twonums(t_list **t);
void	threenums(t_list **t);

typedef struct s_list
{
	long long		content;
	struct s_list	*next;
}	t_list;

#endif