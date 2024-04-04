/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:59:17 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/21 13:36:06 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*
int     main(void)
{
        char str1[5] = "ABCD";
        char str2[5] = "Abcd";
        char str3[5] = "1 2ab";
        char str4[5] = "ab c";

        printf("%d\n", ft_str_is_printable(str1));
        printf("%d\n", ft_str_is_printable(str2));
        printf("%d\n", ft_str_is_printable(str3));
        printf("%d\n", ft_str_is_printable(str4));
        return (0);
}*/
