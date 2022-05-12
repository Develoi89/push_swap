/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 15:53:07 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/12 17:06:41 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_stacks *stack)
{
	int	temp;

	if (stack->alen < 3)
		return ;
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
}

void	sb(t_stacks *stack)
{
	int	temp;

	if (stack->blen < 3)
		return ;
	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
}

void	ss(t_stacks *stack)
{
	int	temp;

	if (stack->alen < 3 || stack->blen < 3)
		return ;
	temp = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = temp;
	temp = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = temp;
}
