int main(int argc, char **argv)
{
	t_list  **t;
	t_list  **b;
	t_list  *node;
	t_list  *tmp;
	int     args;

	tmp = (*t);
	args = 0;
	if (argc <= 1)
		return (0);
	while (argv)
	{
		node = (add_node(atolong(argv[args])));
		node_tolist(node, t);
		args++;
	}
	args = 0;
	while (argv)
	{
		if (!isdigit(argv[args]))
			return (write(2, "Error\n", 6));
		if (!ismaxormin(argv[args]))
			return (write(2, "Error\n", 6));
		if (!counter(argv[args]))
			return (write(2, "Error\n", 6));
		if (!dupnum(argv[args]))
			return (write(2, "Error\n", 6));
		args++;
	}
	if (listsize(t) <= 5 && listsize(t) > 1)
	{
		if (listsize(t) = 2)
			twonum(t);
		if (listsize(t) = 3)
			threenum(t);
		if (listsize(t) = 4)
			fournum(t, b);
		 if (listsize(t) = 5)
            fivenum(t, b);
	}
}
