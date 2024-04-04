/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 15:10:24 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/30 16:49:57 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	esther;

	esther = 0;
	while (str[esther] != '\0')
		esther++;
	return (esther);
}
/*
int 	main()
{
	char *chain = "valesther";
	printf("%d\n", ft_strlen(chain));
}*/
