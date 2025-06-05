#include "bonus.h"

int	main(int argc, char **argv)
{
	int		status;
	char	**split;
	t_stack	*stack;

	if (argc == 1)
		return (0);
	if (argc >= 2 && is_valid_arg(argv, argc))
	{
		split = split_args(argc, argv);
		stack = init_stack(split);
		free_split(&split);
		status = is_stack_sorted(stack);
		if (status)
			print_operation("OK\n");
		else if (!status)
			print_operation("KO\n");
		else
			print_operation("Error\n");
		free_stack(stack);
	}
	else
		ft_error(NULL);
	return (0);
}
