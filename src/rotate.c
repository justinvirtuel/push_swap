#include "../include/push_swap.h"

void	rra(t_stacks *stack)
{
	int		i;
	int		tmp;

	//no rotation for stacks of size 0 and 1
	if (stack->size_a < 2)
		return;
	i = stack->size_a - 1;
	tmp = stack->a[i];

	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = tmp;
	write(1, "rra\n", 3);
}

void	rrb(t_stacks *stack)
{
	int		i;
	int		tmp;

	//no rotation for stacks of size 0 and 1
	if (stack->size_b < 2)
		return;
	i = stack->size_b - 1;
	tmp = stack->b[i];
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = tmp;
	write(1, "rrb\n", 4);
}

void	reverse_rotate(int *stack, int size)  
{
	int		i;
	int		tmp;

	//no rotation for stacks of size 0 and 1
	if (size < 2)
		return;
	tmp = stack[size - 1];
	i = size - 1;	
	while (i > 0)
	{
		stack[i] = stack[i - 1];
		i--;
	}
	stack[0] = tmp;
}
void	rrr(t_stacks *stack)
{
	if (stack->size_a > 1)
		reverse_rotate(stack->a, stack->size_a);
	if (stack->size_b > 1)
		reverse_rotate(stack->b, stack->size_b);
	if (stack->size_a > 1 || stack->size_b > 1)
		write(1, "rrr\n", 4);
}