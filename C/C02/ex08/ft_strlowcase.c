/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 20:44:22 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/20 20:54:11 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char str1[5] = "aBcD";
        char str2[6] = "1Abcd";
        //char str3[5] = "1 2ab"; //BUG
        char str4[5] = "ab c";

        printf("%s\n", ft_strlowcase(str1));
        printf("%s\n", ft_strlowcase(str2));
        //printf("%s\n", ft_strlowcase(str3)); //BUG
        printf("%s\n", ft_strlowcase(str4));
}*/
