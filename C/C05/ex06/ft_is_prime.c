/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 16:06:52 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/31 16:20:10 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (i < nb)
	{
		if (i * i == nb && i * 1 == nb)
			return (i);
		i++;
	}
	return (0);
}

int     main(void)
{
        printf("%d\n", ft_is_prime(11));
        return (0);
}
