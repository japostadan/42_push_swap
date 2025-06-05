#include "pushswap.h"

static int	is_sorted(t_node *list)
{
	t_node	*tmp;

	tmp = list;
	while (tmp->next)
	{
		if (tmp->val > tmp->next->val)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

void	sort_stack(t_stack *stack)
{
	int	len;

	assign_indexes(stack->a);
	len = stack_length(stack->a);
	if (len == 1)
		return ;
	else if (len == 2)
		sort_2(stack);
	else if (len == 3)
		sort_3(stack);
	else if (len == 4)
		sort_4(stack);
	else if (len == 5)
		sort_5(&stack);
	else
		butterfly_sort(stack, len);
}

int	main(int argc, char **argv)
{
	t_stack	*stack;
	char	**split;
	int		status;

	if (argc == 1)
		return (0);
	if (argc >= 2 && is_valid_arg(argv, argc))
	{
		split = split_args(argc, argv);
		stack = init_stack(split);
		status = is_sorted(stack->a);
		if (!status)
			sort_stack(stack);
		free_split(&split);
		free_stack(stack);
	}
	else
		ft_error(NULL);
	return (0);
}
