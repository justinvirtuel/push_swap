#include "../include/push_swap.h"

void	sa(t_stacks *stack)
{
	int		tmp;

	if (stack->size_a < 2)
		return;
	tmp = 0;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	write(1, "sa\n", 3); 
}
void	sb(t_stacks *stack)
{
	int		tmp;

	if (stack->size_b < 2)
		return;
	tmp = 0;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	write(1, "sb\n", 3);
}
void	ss(t_stacks *stack)
{
	int		tmp;

	if (stack->size_a < 2 && stack->size_b < 2)
		return;
	tmp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = tmp;
	tmp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = tmp;
	write(1, "ss\n", 3);	
}