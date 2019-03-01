/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lormond- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 19:10:36 by lormond-          #+#    #+#             */
/*   Updated: 2018/10/08 12:23:16 by lormond-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    putchar(char c)
{
    write(1, &c, 1);
}

void    putstr(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
}

void    putnbr(int nb)
{
    if (nb == -2147483648)
        putstr("-2147483648");

    else
    {
        if (nb < 0)
        {   
            putchar('-');
            nb = nb *(-1);
        }
    
        if (nb > 9)
            putnbr(nb/10);
        putchar(nb%10 +'0');
    }
}

int     atoi(char *str)
{
    int k = 0;
    int nb = 0;
    int neg = 0;

    while ((str[k] == '\n') || (str[k] == ' ') || (str[k] == '\t') || (str[k] == '\v') ||
            (str[k] == '\b') || (str[k] == '\r') || (str[k] == '\f') || (str[k] == '\a'))
        k++;
    if (str[k] == '-')
        neg = 1;
    while (str[k] == '-' || str[k] == '+')
        k++;
    while (str[k] >= '0' && str[k] <= '9')
    {
        nb = nb * 10;
        nb = nb + str[k] - '0';
        k++;
    }
    if (neg == 1)
        return (nb = nb * (-1));
    else
        return (nb);
}