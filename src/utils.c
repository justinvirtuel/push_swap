#include "../include/push_swap.h"

void	error_handler(int *stack)
{
	free(stack);
	write(1, "Error, check input\n", 19);
	exit(1);
}

int	push_swap_len(char **av)
{
	int	i;

	i = 0;
	while (*av)
	{
		av++;
		i++;
	}
	return(i);
}

int	push_swap_atoi(char *str, int *stack)
{
	unsigned int	i;
	int					sign;
	unsigned long int	number;

	i = 0;
	number = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			error_handler(stack);
		number = (str[i] - '0') + (number * 10);
		i++;
	}
	if ((number > 2147483648  && sign == -1) 
		|| (number > 2147483647 && sign == 1))
		error_handler(stack);
	return (number * sign);
}

void	check_double(int* stack, int size)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack[i] == stack[j])
				error_handler(stack);
			j++;
		}
		i++;
		j = i + 1;
	}
}

void	check_sorted(int *stack, int size, int order)
{
	int		i;

	if (order == 0)
	{
		i = 1;
		while(i < size)
		{
			if (stack[i - 1] > stack[i])
				return(0);
			i++;
		}
		return(1);
	}
	else
	{
		i = 1;
		while(i < size)
		{
			if (stack[i - 1] < stack[i])
				return(0);
			i++;
		}
		return(1);
	}
}
int		median_of_numbers(int *pivot, int *stack, int size)
{
	int		*temporary_stack;
	int		i;

	temporary_stack = (int *)malloc(size * sizeof(int));
	if (!temporary_stack)
		return (0);
	i = 0;
	while (i < size)
	{
		temporary_stack[i] = stack[i];
		i++;
	}
	temporary_sort(temporary_stack, size);
	*pivot = temporary_stack[size/2];
	free(temporary_stack);
	return(1);
}