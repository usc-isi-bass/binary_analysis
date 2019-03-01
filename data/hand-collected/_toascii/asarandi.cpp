/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asarandi <asarandi@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/16 12:53:54 by asarandi          #+#    #+#             */
/*   Updated: 2018/03/16 15:13:09 by asarandi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ftoa(char *buf, double d)
{
    int         i;
    int         j;
    int         negative;

    negative = d < 0.0 ? 1 : 0;
    if (negative)
        d = -d;
    i = 48;
    buf[i--] = 0;
    j = (int)(d * 1.01);
    d = ((double)d - (double)(int)d) * 100000.01;
    while (i > 42)
    {
        buf[i--] = (int)d % 10 + '0';
        d /= 10.0;
    }
    buf[i--] = '.';
    while ((i == 41) || (j != 0))
    {
        buf[i--] = (j % 10) + '0';
        j /= 10;
    }
    if (negative)
        buf[i--] = '-';
    return (&buf[++i]);
}