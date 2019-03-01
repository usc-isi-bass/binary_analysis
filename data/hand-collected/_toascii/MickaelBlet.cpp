/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftoa.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mblet <mblet@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/18 08:37:48 by mblet             #+#    #+#             */
/*   Updated: 2016/02/19 18:50:07 by mblet            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <math.h>
#include <stdlib.h>

static void     ft_straddchar(char *s1, char c)
{
    s1[0] = c;
    s1[1] = '\0';
}

static void     s_strcal(char **s, long n)
{
    if (n < 0)
    {
        ft_straddchar(*s, '-');
        n = n * -1;
    }
    if (n < 10)
    {
        ft_straddchar(*s, '0' + n);
    }
    else
    {
        s_strcal(s, n / 10);
        ft_straddchar(*s, '0' + n % 10);
    }
}

static void     s_strcal_p(char **s, long n, long *prec)
{
    if (n < 0)
    {
        ft_straddchar(*s, '-');
        n = n * -1;
    }
    if (n < 10)
    {
        ft_straddchar(*s, '0' + n);
    }
    else
    {
        --(*prec);
        s_strcal_p(s, n / 10, prec);
        ft_straddchar(*s, '0' + n % 10);
    }
}

long int        s_get_pprec(long prec)
{
    long int    pprec;

    if (prec == -1)
        prec = 6;
    pprec = (prec == 0) ? 0 : 1;
    if (prec > 18)
        prec = 18;
    while (prec)
    {
        pprec = pprec * 10;
        --prec;
    }
    return (pprec);
}

static void     s_point(long t, long int pprec, long prec, char **str)
{
    prec = (prec == -1) ? 6 : prec;
    ft_straddchar(*str, '.');
    --prec;
    while (t < pprec / 10 && prec > 0)
    {
        --prec;
        pprec /= 10;
        ft_straddchar(*str, '0');
    }
    s_strcal_p(str, t, &prec);
    while (prec > 0)
    {
        ft_straddchar(*str, '0');
        --prec;
    }
}

char            *ft_ftoa(double n, long prec)
{
    char        *str;
    long        t;
    long int    pprec;

    str = NULL;
    pprec = s_get_pprec(prec);
    s_strcal(&str, n);
    if ((n - (long)(n)) * pprec > 0)
        t = (n - (long)n) * pprec + (double)1 / 10000;
    else
        t = (n - (long)n) * pprec + (double)1 / 10000;
    if (pprec == 0)
        return (str);
    t = (t < 0) ? -t : t;
    s_point(t, pprec, prec, &str);
    return (str);
}