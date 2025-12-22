void	fournum(t_list **t, t_list	**b)
{
	t_list	*tmp;
	t_list	*min;

	tmp = (*t);
	min = (*t);
	while (tmp && tmp->next)
	{
		if (tmp->content < min->content)
			min = tmp->content;
		tmp = tmp->next;
	}
	node_tolist(min, t);
	pb(t, b);
	threenum(t);
	pa(t, b);
}

void	fivenum(t_list **t, t_list	**b)
{
	t_list	*tmp;
	t_list	*min;

	tmp = (*t);
	min = (*t);
	while (tmp && tmp->next)
	{
		if (tmp->content < min->content)
			min = tmp->content;
		tmp = tmp->next;
	}
	node_tolist(min, t);
	pb(t, b);
	fournum(t, b);
	pa(t, b);
}
