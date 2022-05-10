/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrncmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealonso- <ealonso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:45:22 by ealonso-          #+#    #+#             */
/*   Updated: 2022/04/25 18:12:22 by ealonso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strrncmp(const char *str, const char *str2, size_t n)
{
	int	i;
	int	l;

	i = ft_strlen(str) - 1;
	l = ft_strlen(str2) - 1;
	while (n > 0)
	{
		if (str[i] == str2[l])
		{
			i--;
			l--;
			n--;
		}
		else
			break ;
	}
	if (n == 0)
		return (0);
	else
		return (1);
}
