/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalamarn <jalamarn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 21:03:10 by jalamarn          #+#    #+#             */
/*   Updated: 2025/12/28 18:41:58 by jalamarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	long long		content;
	struct s_list	*next;
}	t_list;

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
int		ftisdigit(char *t);
int		ismaxormin(char *t);
int		dupnum(t_list **t);
int		issorted(t_list *t);
void	twonums(t_list **t);
void	threenums(t_list **t);
void	fournums(t_list **t, t_list	**b);
void	fivenums(t_list **t, t_list	**b);
t_list	*add_node(long x);
void	node_tolist(t_list **t, t_list *n);
void	list_clear(t_list **t);
int		ft_lstsize(t_list **t);
void	radixsort(t_list **t);
t_list	*copy_orig(t_list *t);

#endif