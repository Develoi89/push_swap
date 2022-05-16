/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:09:24 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/16 15:22:04 by ealonso-         ###   ########.fr       */
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
	pb(&stack);
	printf("0a:%d\n 1a:%d\n 0b:%d\n", stack.a[0], stack.a[1], stack.b[0]);
	return (0);
}
