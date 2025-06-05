#include "pushswap.h"

int	atoi_check(char *str)
{
	int	val;
	int	str_len;

	val = ft_atoi(str);
	str_len = ft_strlen(str);
	if (val == 0 && str_len > 1)
		return (0);
	if (val && str_len > 1 && ft_inset("+-", str[str_len - 1]))
		return (0);
	return (1);
}

void	assign_indexes(t_node *head)
{
	int		index;
	t_node	*current;
	t_node	*temp_head;

	temp_head = head;
	while (head)
	{
		current = temp_head;
		index = 0;
		while (current)
		{
			if (head->val > current->val)
				index++;
			current = current->next;
		}
		head->index = index;
		head = head->next;
	}
}
