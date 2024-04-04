/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 13:54:16 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/21 15:30:01 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int     main(void)
{
       // char str1[16] = "ABCD";
       // char str2[16] = "0123";
	char str3[16] = "bonjour";
	char str4[16] = "salut";
        unsigned int    n = 4;

       // printf("%s\n", strncpy(str1, str2, n));
        printf("%s\n", ft_strncpy(str3, str4, n));
        return (0);
}
