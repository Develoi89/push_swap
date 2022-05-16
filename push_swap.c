/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:09:24 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/16 17:07:38 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
	while (j < (argc - 1))
		stack.a[j++] = ft_atoi(argv[i++]);
	return (0);
}
