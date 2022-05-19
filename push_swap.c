/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:09:24 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/19 16:20:04 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	comprove(t_stacks *stack)
{
	int	i;

	i = 1;
	while (i < stack->alen)
	{
		if (stack->a[i - 1] > stack->a[i])
			return (0);
		i++;
	}
	return (1);
}

void	mediumalg(t_stacks *stack)
{
	while (!comprove(stack))
	{
		if (stack->a[0] > stack->a[1])
			sa(stack);
		if (stack->a[0] > stack->a[stack->alen - 1])
			rra(stack);
		if (stack->a[0] < stack->a[1] && stack->a[0] < stack->a[stack->alen - 1]
			&& !comprove(stack))
			pb(stack);
		if (comprove(stack))
		{
			pa(stack);
			pa(stack);
		}
	}
}

void	threealg(t_stacks *stack)
{
	while (!comprove(stack))
	{
		if (stack->a[0] > stack->a[1])
			sa(stack);
		if (stack->a[1] > stack->a[2])
			rra(stack);
		if (stack->a[0] > stack->a[1] && stack->a[0] > stack->a[2])
			ra(stack);
	}
}

int	main(int argc, char **argv)
{
	int			i;
	int			j;
	t_stacks	stack;

	i = 1;
	j = 0;
	stack.alen = argc - 1;
	stack.blen = 0;
	stack.a = malloc(sizeof(int) * (stack.alen));
	stack.b = malloc(sizeof(int) * (stack.alen));
	stack.c = malloc(sizeof(int) * (stack.alen));
	while (j < (argc - 1))
		stack.a[j++] = ft_atoi(argv[i++]);
	if (argc < 5)
		threealg(&stack);
	if (argc > 4 && argc < 7)
		mediumalg(&stack);
	if (argc > 6)
	{
		bubbleclon(&stack);
		bigalg(&stack);
	}
	return (0);
}
