/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:34:38 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/19 17:40:35 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_stacks
{
	int	*a;
	int	*b;
	int	*c;
	int	alen;
	int	blen;
}	t_stacks;

void	sa(t_stacks *stack);
void	sb(t_stacks *stack);
void	pb(t_stacks *stack);
void	pa(t_stacks *stack);
void	ra(t_stacks *stack);
void	rb(t_stacks *stack);
void	rr(t_stacks *stack);
void	rra(t_stacks *stack);
void	rrb(t_stacks *stack);
void	rrr(t_stacks *stack);
void	bubbleclon(t_stacks *stack);
void	bigalg(t_stacks *stack);
int		comprove(t_stacks *stack);
void	checkerror(t_stacks *stack, char **argv);
void	freeall(t_stacks *stack);

#endif
