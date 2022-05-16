/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:17:39 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/16 17:08:08 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_a(t_stacks *stack)
{
	int	i;

	i = 0;
	if (stack->alen != 0)
	{
		while (i <= stack->alen)
		{
			stack->a[stack->alen - i] = stack->a[stack->alen - i - 1];
			i++;
		}
	}
	stack->a[0] = stack->b [0];
	i = 0;
	if (stack->blen > 1)
	{
		while (i < stack->blen)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
	}
	else
		stack->b[0] = 0;
}

void	push_b(t_stacks *stack)
{
	int	i;

	i = 0;
	if (stack->blen != 0)
	{
		while (i <= stack->blen)
		{
			stack->b[stack->blen - i] = stack->b[stack->blen - i - 1];
			i++;
		}
	}
	stack->b[0] = stack->a [0];
	i = 0;
	if (stack->alen > 1)
	{
		while (i < stack->alen)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
	}
	else
		stack->a[0] = 0;
}

void	pb(t_stacks *stack)
{
	if (stack->alen == 0)
		return ;
	else
	{
		push_b(stack);
		stack->blen++;
		stack->alen--;
		ft_printf("pb\n");
	}
}

void	pa(t_stacks *stack)
{
	if (stack->blen == 0)
		return ;
	else
	{
		push_a(stack);
		stack->alen++;
		stack->blen--;
		ft_printf("pa\n");
	}
}
