#include "../include/push_swap.h"

void	ra(t_stacks *stack)
{
	int		i;
	int		tmp;

	if (stack->size_a < 2)
		return;
	i = 0;
	tmp = stack->a[i];
	while (i < stack->size_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[i] = tmp;
	write(1, "ra\n", 3);
}

void	rb(t_stacks *stack)
{
	int		i;
	int		tmp;

	if (stack->size_b < 2)
		return;
	i = 0;
	tmp = stack->b[i];
	while (i < stack->size_b - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[i] = tmp;
	write(1, "rb\n", 3);
}

void	rotate(int *stack, int size)
{
	int		i;
	int		tmp;
	if (size < 2)
		return;
	i = 0;
	// save the first value in the array
	tmp = stack[i];
	while (i < size - 1)
		{
			stack[i] = stack[i + 1];
			i++;
		}
	stack[i] = tmp;
}

void	rr(t_stacks *stack)
{
	if (stack->size_a > 1)
		rotate(stack->a, stack->size_a);
	if (stack->size_b > 1)
		rotate(stack->b, stack->size_b);
	// print rr if any of roation was made
	if (stack->size_a > 1 || stack->size_b > 1)
		write(1, "rr\n", 3);	
}

void	rra(t_stacks *stack)
{
	int		i;
	int		tmp;

	//no rotation for stacks of size 0 and 1
	if (stack->size_a < 2)
		return;
	i = stack->size_a - 1;
	// save the last value in the list
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
	// save the last value in the list
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
	// if any of the rotation happened we print the opearation 
	if (stack->size_a > 1 || stack->size_b > 1)
		write(1, "rrr\n", 4);
}
