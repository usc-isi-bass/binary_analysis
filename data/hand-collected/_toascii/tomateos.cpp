/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tzhou <tzhou@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 23:09:02 by tzhou             #+#    #+#             */
/*   Updated: 2017/02/14 23:05:55 by tzhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
static int  get_nbr_len(int n)
{
    int len;

    len = 0;
    if (n < 0)
        len++;
    while (n >= 10 || n <= -10)
    {
        len++;
        n = n / 10;
    }
    len++;
    return (len);
}

char        *c_itoa(int n)
{
    int     len;
    int     sign;
    char    *output;

    sign = 1;
    if (n < 0)
        sign = -1;
    len = get_nbr_len(n);
    output = (char*)malloc(sizeof(char) * (len + 1));
    if (!output)
        return (NULL);
    output[len--] = 0;
    while (n >= 10 || n <= -10)
    {
        output[len--] = (n % 10) * sign + 48;
        n = n / 10;
    }
    output[len] = n % 10 * sign + 48;
    if (len)
        output[0] = '-';
    return (output);
}
