/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:40:16 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/16 17:05:56 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stacks *stack)
{
	int	i;
	int	temp;

	i = 1;
	temp = stack->a[stack->alen - 1];
	while (i <= stack->alen)
	{
		stack->a[stack->alen - i] = stack->a[stack->alen - i - 1];
		i++;
	}
	stack->a[0] = temp;
	ft_printf("rra\n");
}

void	rrb(t_stacks *stack)
{
	int	i;
	int	temp;

	i = 1;
	temp = stack->b[stack->blen - 1];
	while (i <= stack->blen)
	{
		stack->b[stack->blen - i] = stack->b[stack->blen - i - 1];
		i++;
	}
	stack->b[0] = temp;
	ft_printf("rrb\n");
}

void	rrr(t_stacks *stack)
{
	rra(stack);
	rrb(stack);
	ft_printf("rrr\n");
}
