/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:47:54 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/30 00:23:20 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	resultat;
	int	i;

	resultat = 1;
	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		resultat *= nb;
		i++;
	}
	return (resultat);
}
/*
int	main(void)
{
	printf("%d\n", ft_iterative_power(5, 3));
	return (0);
}*/
