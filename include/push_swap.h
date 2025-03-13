#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stacks
{
	int		*a;
	int		*b;
	int		size_a;
	int		size_b;
}	t_stacks;

#include <stdlib.h>
#include <unistd.h>
#include "../libft/libft.h"

void	push_swap(char **av);
void	free_split(char **av);
// swap
void	sa(t_stacks *stack);
void	sb(t_stacks *stack);
void	ss(t_stacks *stack);
void	pa(t_stacks *stack);
void	pb(t_stacks *stack);
// rotate
void	ra(t_stacks *stack);
void	rb(t_stacks *stack);
void	rotate(int *stack, int size);
void	rr(t_stacks *stack);
void	rra(t_stacks *stack);
void	rrb(t_stacks *stack);
void	reverse_rotate(int *stack, int size);
void	rrr(t_stacks *stack);

// push
void	pa(t_stacks *stack);
void	pb(t_stacks *stack);
void	ft_push(t_stacks *stack, int len, int action);

//utils
void	error_handler(int *stack);
int		push_swap_len(char **av);
int		push_swap_atoi(char *str, int *stack);
void	check_double(int* stack, int size);
void	check_sorted(int *stack, int size, int order);
int		median_of_numbers(int *pivot, int *stack, int size);

//sort
int	sort(t_stacks *stack, int size);
void	sort_three_stack_a(t_stacks *stack);
void	temporary_sort(int *temporary_stack, int size);
int		sort_three_b(t_stacks *stack, int len)

// quick sort
void	quick_sort_a_and_b(t_stacks *stack, int len);
int		quick_sort_a(t_stacks *stack, int len, int rotations);
int		quick_sort_b(t_stacks *stack, int len, int rotations);