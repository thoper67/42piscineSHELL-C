/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:18:33 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/20 18:02:07 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include <stdio.h>
#include <string.h>
*/
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*
int	main(int ac, char **av)
{
	char str1[5] = "aBcD";
        char str2[5] = "Abcd";
       //char str3[5] = "1 2ab"; //BUG
        char str4[5] = "ab c";

        printf("%s\n", ft_strupcase(str1));
        printf("%s\n", ft_strupcase(str2));
       //printf("%s\n", ft_strupcase(str3)); //BUG
        printf("%s\n", ft_strupcase(str4));
	
        return (0);
}*/
