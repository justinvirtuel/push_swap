#include "../include/push_swap.h"

void	quick_sort_a_and_b(t_stacks *stack, int len)
{
	if (len == 3 && stack->size_a == 3)
		sort_three_stack_a(stack);
	else if (len == 2)
	{
		if (stack->a[0] > stack->a[1])
			sa(stack);
	}
	else if (len == 3)
	{
		while (len != 3 || !(stack->a[0] < stack->a[1] 
				&& stack->a[1] < stack->a[2]))
		{
			if (len == 3 && (stack->a[0] > stack->a[1] && stack->a[2] > stack->[0]))
				sa(stack);
			else if (len == 3 && !(stack->a[2] > stack->a[1]
					&& stack->a[2] > stack->a[0]))
				len = ft_push(stack, len, 0);
			else if (stack->a[0] > stack->a[1])
				sa(stack);
			else if (len++)
				pa(stack);
		}
	}
}
int		sort_three_b(t_stacks *stack, int len)
{
	if (len == 1)
		pa(stack);
	else if (len == 2)
	{
		if (stack->b[0] < stack->b[1])
			sb(stack);
		while (len--)
			pa(stack);
	}
	else if (len == 3)
	{
		while (len || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (len == 1 && stack->a[0] > stack->a[1])
				sa(stack);
			else if (len == 1 || (len >= 2 && stack->b[0] > stack->b[1])
					|| (len == 3 && (stack->b[0] > stack->b[1] && stack->b[0] > stack->b[2])))
				len = ft_push(stack, len, 1);
			else
				sb(stack);
		}		
	}
	return(0);
}

int		quick_sort_a(t_stacks *stack, int len, int rotations)
{
	int		pivot;
	int		numbers;

	if (check_sorted(stack->a, len, 0))
		return(1);
	numbers = len;
	if (len <= 3)
	{
		quick_sort_a_and_b(stack, len);
		return (1);
	}
	if (!median_of_numbers(&pivot, stack->a, len))
		return(0);
	while (len != numbers / 2 + numbers % 2)
	{
		if (stack->a[0] < pivot && len--)
			pb(stack);
		else if (++rotations) // equivalent to else ra then rotation++
			ra(stack);
	}
	while (numbers / 2 + numbers % 2 != stack->size_a && rotations--)
		rra(stack);
	return (quick_sort_a(stack, numbers / 2 + numbers % 2, 0) 
		&& quick_sort_b(stack, numbers / 2, 0))
}

int		quick_sort_b(t_stacks *stack, int len, int rotations)
{
	int		pivot;
	int		numbers;

	if (check_sorted(stack->b, len, 1))
	{
		while (len--)
			pa(stack);
	}
	if (len == 3)
	{
		sort_three_b(stack, len);
		return(1);
	}
	numbers = len;
	if (!median_of_numbers(&pivot, stack->b, len))
		return(0);
	while (len != numbers / 2)
	{
		if (stack->b[0] >= pivot && len--)
			pa(stack);
		else if (rotations++)
			rb(stack);
	}
	while (numbers / 2 != stack->size_b && rotations--)
		rrb(stack);
	return (quick_sort_a(stack, numbers / 2 + numbers % 2, 0) 
		&& quick_sort_b(stack, numbers / 2, 0))
}