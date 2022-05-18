/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 15:52:20 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/18 16:33:23 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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
	stack->c = stack->a;
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
