#include "pushswap.h"

void	sa(t_stack **stack, int print)
{
	t_node	*first;
	t_node	*second;

	if (!(*stack)->a || !(*stack)->a->next)
		return ;
	first = (*stack)->a;
	second = (*stack)->a->next;
	first->next = second->next;
	second->next = first;
	(*stack)->a = second;
	if (print)
		print_operation("sa\n");
}

void	sb(t_stack **stack, int print)
{
	t_node	*first;
	t_node	*second;

	if (!(*stack)->b || !(*stack)->b->next)
		return ;
	first = (*stack)->b;
	second = (*stack)->b->next;
	first->next = second->next;
	second->next = first;
	(*stack)->b = second;
	if (print)
		print_operation("sb\n");
}

void	ss(t_stack **stack, int print)
{
	sa(stack, 0);
	sb(stack, 0);
	if (print)
		print_operation("ss\n");
}
