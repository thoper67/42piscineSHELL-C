/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 14:00:26 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/18 14:19:17 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	w;
	int	z;

	w = *a;
	z = *b;
	*a = w / z;
	*b = w % z;
}
/*
#include <stdio.h>

int	main(void)
{
	int valw = 36 ;
	int valz = 5;
	ft_ultimate_div_mod(&valw, &valz);
	printf("%d\n%d\n",valw, valz);
	return (0);
}*/
