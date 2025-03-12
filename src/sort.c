#include "../include/push_swap.h"

void	temporary_sort(int *temporary_stack, int size)
{
	int		i;
	int		j;
	int		temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (temporary_stack[i] > temporary_stack[j])
			{
				temp = temporary_stack[i];
				temporary_stack[i] = temporary_stack[j];
				temporary_stack[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void	sort_three_stack_a(t_stacks *stack)
{
	if (stack->a[0] > stack->a[1] && stack->a[0] < stack->a[2] 
		&& stack->a[1] < stack->a[2])
		sa(stack);
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] > stack->a[2])
	{
		sa(stack);
		rra(stack);
	}
	if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] < stack->a[2])
		ra(stack);
	if (stack->a[0] < stack->a[1] && stack->a[0] < stack->a[2]
		&& stack->a[1] > stack->a[2])
	{
		sa(stack);
		ra(stack);
	}
	else if (stack->a[0] < stack->a[1] && stack->a[0] > stack->a[2]
		&& stack->a[1] > stack->a[2])
		rra(stack);
}

int	sort(t_stacks *stack, int size)
{
	if (check_sorted(stack->a, stack->size_a, 0) == 0)
	{
		if (size == 2)
			sa(stack);
		else if (size == 3)
			sort_three_stack_a(stack);
		else
			quick_sort_stack_a(stack);
	}
	return(0);
}