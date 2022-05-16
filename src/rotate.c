/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:25:18 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/16 16:39:55 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stacks *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->a[0];
	while (i < stack->alen)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	stack->a[stack->alen - 1] = temp;
	ft_printf("ra\n");
}

void	rb(t_stacks *stack)
{
	int	i;
	int	temp;

	i = 0;
	temp = stack->b[0];
	while (i < stack->blen)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	stack->b[stack->blen - 1] = temp;
	ft_printf("rb\n");
}

void	rr(t_stacks *stack)
{
	rb(stack);
	ra(stack);
	ft_printf("rr\n");
}
