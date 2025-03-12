#include "../include/push_swap.h"

void	pa(t_stacks *stack)
{
	int		i;

	i = 0;
	if (stack->size_b == 0)
		return;
	i = stack->size_a;
	// use of size a because array a will have one extra element
	while (i > 0)
	{
		stack->a[i] = stack->a[i - 1];
		i--;
	}
	stack->a[0] = stack->b[0];
	i = 0;
	while (i < stack->size_b - 1)
	{
		stack->b[i] = stack->b[i+1];
		i++;
	}
	stack->size_a++;
	stack->size_b--;
	write(1, "pa\n", 3);
}
void	pb(t_stacks *stack)
{
	int		i;

	if (stack->size_a == 0)
		return;
	i = stack->size_b;
	while (i > 0)
	{
		stack->b[i] = stack->b[i - 1];
		i--;
	}
	stack->b[0] = stack->a[0];
	i = 0;
	while (i < stack->size_a - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	// update size
	stack->size_b++;
	stack->size_a--;
	write(1, "pb\n", 3);	
}

void	ft_push(t_stacks *stack, int len, int action)
{
	if (action == 0)
		pb(stack);
	else
		pa(stack);
	len--;
	return(len);
}