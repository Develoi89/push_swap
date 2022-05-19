/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:52:20 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/19 17:41:56 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	freeall(t_stacks *stack)
{
	free(stack->a);
	free(stack->b);
	free(stack->c);
}

void	checknum(char **argv, t_stacks *stack)
{
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (argv[i])
	{
		while (argv [i][j] != '\0')
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
			{
				ft_printf("Error\n");
				freeall(stack);
				exit (0);
			}
			j++;
		}
		j = 0;
		i++;
	}
}

void	checkerror(t_stacks *stack, char **argv)
{
	int	i;
	int	j;

	checknum(argv, stack);
	i = 0;
	j = i + 1;
	while (i < stack->alen)
	{
		j = i + 1;
		while (j < stack->alen)
		{
			if (stack->a[i] == stack->a[j])
			{
				ft_printf("Error\n");
				freeall(stack);
				exit (0);
			}
			j++;
		}
		i++;
	}
}

int	comprovec(t_stacks *stack)
{
	int	i;

	i = 1;
	while (i < stack->alen)
	{
		if (stack->c[i - 1] > stack->c[i])
			return (0);
		i++;
	}
	return (1);
}

void	bubbleclon(t_stacks *stack)
{
	int	i;
	int	temp;

	i = 0;
	while (i < stack->alen)
	{
		stack->c[i] = stack->a[i];
		i++;
	}
	i = 0;
	while (!comprovec(stack))
	{
		if (stack->c[i] > stack->c[i + 1])
		{
			temp = stack->c[i];
			stack->c[i] = stack->c[i + 1];
			stack->c[i + 1] = temp;
		}
		i++;
		if (i == stack->alen - 1)
			i = 0;
	}
}
