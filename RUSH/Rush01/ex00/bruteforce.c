/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bruteforce.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tperrin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 18:58:24 by tperrin           #+#    #+#             */
/*   Updated: 2024/03/24 18:58:37 by tperrin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
// gestion des 4 puissance 4 possibilités
void verification();

void  ft_strcncpy(char *dest, char *src, unsigned int n);

void solpos(int n, int i, char **str)
{
    char const      *tab_0[24] = {
        "1234",
        "1243",
        "1324",
        "1342",
        "1423",
        "1432",
        "2134",
        "2143",
        "2314",
        "2341",
        "2413",
        "2431",
        "3124",
        "3142",
        "3214",
        "3241",
        "3412",
        "3421",
        "4123",
        "4132",
        "4213",
        "4231",
        "4312",
        "4321" };
    ft_strcncpy(&str[n][1], (char *)tab_0[i], 4);
}

void	bruteforce1(int a, int b, int c, int d, char **str)
{
    while (verification(str) != 0 || a != '\0')
    {
        while (verification(str) != 0 || b != '\0')
        {
            while (verification(str) != 0 || c != '\0')
            {	
                while (verification(str) != 0 || d != '\0')
                {
                    d++;
                    solpos(4, d, str);
                }
                d = 0;
                c++;
                solpos(3, c, str);
            }
            c = 0;
            b++;
            solpos(2, b, str);
        }
        b = 0;
        a++;
        solpos(1, a, str);
    }
}
    
void	bruteforce(char	**str)
{
    int a;
    int b;
    int c;
    int d;

    a=0;
    b=0;
    c=0;
    d=0;
    bruteforce1(a, b, c, d, str);
}
