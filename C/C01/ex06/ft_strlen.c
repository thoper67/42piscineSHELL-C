/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 17:13:08 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/19 11:31:29 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
*/
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
