/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:33:43 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/20 16:40:14 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 65 && str[i] <= 90))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char str1[5] = "ABCD";
        char str2[5] = "Abcd";
        char str3[5] = "12ab";
        char str4[5] = "ab c";

        printf("%d\n", ft_str_is_uppercase(str1));
        printf("%d\n", ft_str_is_uppercase(str2));
        printf("%d\n", ft_str_is_uppercase(str3));
        printf("%d\n", ft_str_is_uppercase(str4));
        return (0);
}*/
