/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 22:14:18 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/31 16:04:02 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	resultat = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (resultat);
	while (nb > 1)
	{
		resultat *= nb;
		nb--;
	}
	return (resultat);
}
/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(0));
	return (0);
}*/
