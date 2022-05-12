/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 16:17:39 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/12 18:42:16 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_stacks *stack)
{
	int	*temp;
	int	i;

	if (stack->blen == 0)
		return ;
	i = 0;
	temp = stack->a;
	free(stack->a);
	stack->alen++;
	stack->a = malloc(sizeof(int) * (stack->alen));
	stack->a[0] = stack->b[0];
	while (stack->alen - i++ - 1)
		stack->a[stack->alen -1 - i] = temp[stack->alen - 2 - i];
	i = 0;
	free(temp);
	temp = stack->b;
	free(stack->b);
	stack->blen--;
	stack->b = malloc(sizeof(int) * (stack->blen));
	while (stack->blen - i++ - 1)
		stack->b[stack->blen -1 - i] = temp[stack->blen - i];
	free(temp);
}

void	pb(t_stacks *stack)
{
	int	*temp;
	int	i;

	if (stack->alen == 0)
		return ;
	i = 0;
	temp = stack->b;
	free(stack->b);
	stack->blen++;
	stack->b = malloc(sizeof(int) * (stack->blen));
	stack->b[0] = stack->a[0];
	while (i < stack->blen)
	{
		stack->b[stack->blen - i] = temp[stack->blen -1 - i];
		i++;
	}
	i = 0;
	free(temp);
	temp = stack->a;
	free(stack->a);
	stack->alen--;
	stack->a = malloc(sizeof(int) * (stack->alen));
	while (i < stack->alen)
	{
		stack->a[stack->alen -1 - i] = temp[stack->alen - i];
		i++;
	}
	free(temp);
}
