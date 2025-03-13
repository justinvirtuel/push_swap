#include "../include/push_swap.h"

void	push_swap(char **av)
{
	t_stacks	stack;
	int		size;
	int		i;

	i = 0;
	size = push_swap_len(av);
	stack.a = malloc(size * sizeof(int));
	if (!stack.a)
		return;
	stack.size_a = size;
	stack.b = malloc(size * sizeof(int));
	if (!stack.b)
	{
		free(stack.a);
		return;
	}
	stack.size_b = 0;
	while (i++ < size)
		stack.a[i] = push_swap_atoi(av[i], stack.a);
	check_double(stack.a, size);
	sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

void	free_split(char **av)
{
	int		i;

	i = 0;
	while (av[i])
	{
		free(av[i]);
		i++;
	}
	free(av);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		push_swap(av);
		if (ac == 2)
			free_split(av);
		return(0);
	}
	return(0);
}