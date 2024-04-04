/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 19:34:08 by tperrin           #+#    #+#             */
/*   Updated: 2024/04/03 19:35:38 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int     ft_strlen(char *str)
{
        int     i;

        i = 0;
        while (str[i])
                i++;
        return (i);
}

int     *ft_range(int min, int max)
{
        int     *ret;
        int     i;

        ret = NULL;
        i = 0;
        if (min >= max)
                return (ret);
        ret = malloc(sizeof(int) * (max - min) +1);
        if (!ret)
                return (ret);
        while (min < max)
        {
                ret[i] = min;
                i++;
                min++;
        }
        return (ret);
}

int     main(void)
{
	int *v =  ft_range(0, 10);
        int i = 0;
        while (i < 10)
        {
                printf("%d\n", v[i]);
                i++;
        }
}


