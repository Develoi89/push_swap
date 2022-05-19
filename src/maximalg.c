/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maximalg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:12:57 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/19 16:19:57 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	simplify(t_stacks *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < stack->alen)
	{
		while (stack->c[j] != stack->a[i])
			i++;
		stack->a[i] = j;
		j++;
		i = 0;
	}
}

void	bigalg(t_stacks *stack)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	simplify(stack);
	while (!comprove(stack))
	{
		j = 0;
		while (j < (stack->alen + stack->blen))
		{
			if (((stack->a[0] >> i) & 1) == 1)
				ra(stack);
			else
				pb(stack);
			j++;
		}
		while (stack->blen != 0)
			pa(stack);
		i++;
	}
}
