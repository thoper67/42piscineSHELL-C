/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 15:08:28 by tperrin           #+#    #+#             */
/*   Updated: 2024/04/03 19:11:55 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)

{
	int	w;

	w = *a;
	*a = *b;
	*b = w;
}

#include <stdio.h>

int	main(void)
/*
{
	int	zab;
	int	baz;

	zab = 0;
	baz = 1;
	printf("zab: %d\nbaz: %d\n", zab, baz);
	ft_swap(&zab, &baz);
	printf ("zab: %d\nbaz: %d\n", zab, baz);
	return (0);
}*/
