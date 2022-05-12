/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 15:09:24 by ealonso-          #+#    #+#             */
/*   Updated: 2022/05/12 17:05:38 by ealonso-         ###   ########.fr       */
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
	stack.alen = argc;
	stack.a = malloc(sizeof(int) * (stack.alen));
	while (j < (argc - 1))
		stack.a[j++] = ft_atoi(argv[i++]);
	printf("%d %d", stack.a[0], stack.a[1]);
	return (0);
}
