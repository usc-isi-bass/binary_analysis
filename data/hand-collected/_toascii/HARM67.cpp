#include <stddef.h>
#include <stdlib.h>
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uitoa_base_1.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfroehly <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/11 21:43:32 by mfroehly          #+#    #+#             */
/*   Updated: 2015/12/17 08:55:18 by mfroehly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static char *r_ftoae(double nb, char *tmp, int precision)
{
    char    *rt;

    if (nb < 0.0)
    {
        *tmp = '-';
        r_ftoae(-nb, tmp + 1, precision);
        return (tmp);
    }
    else if (nb >= 10.0)
    {
        rt = r_ftoae(nb / 10.0, tmp, precision);
        *rt = ((long int)nb % 10) + '0';
        return (rt + 1);
    }
    else if ((long int)nb > 0)
        *tmp = (long int)nb + '0';
    return (tmp + 1);
}

static void r_ftoai(double nb, char *tmp, int precision)
{
    int i;

    if (nb < 0.0)
        nb = -nb;
    i = 1;
    tmp[0] = '.';
    while (i < precision)
    {
        nb *= 10.0;
        if ((long int)nb % 10 >= 0 && (long int)nb % 10 <= 9)
            tmp[i++] = (long int)nb % 10 + '0';
        else
            tmp[i++] = '0';
    }
}

static void make_fprecision(char *str, int precision)
{
    if (str[precision + 1] >= '5')
    {
        str[precision]++;
    }
    str[precision + 1] = '\0';
}

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (*(s + i) != '\0')
        i++;
    return (i);
}


char    *ft_strcpy(char *dest, const char *src)
{
    int i;

    i = 0;
    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = 0;
    return (dest);
}


void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    size_t          i;
    unsigned char   *dest_c;
    unsigned char   *src_c;

    dest_c = (unsigned char*)dest;
    src_c = (unsigned char*)src;
    i = 0;
    while (i < n)
    {
        dest_c[i] = src_c[i];
        if (src_c[i] == (unsigned char)c)
            return (dest + i + 1);
        i++;
    }
    return (0);
}

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *rt;
    size_t  l_s1;
    size_t  l_s2;

    l_s1 = ft_strlen(s1);
    l_s2 = ft_strlen(s2);
    rt = (char*)malloc(sizeof(char) * (l_s1 + l_s2 + 10));
    if (rt == 0)
        return (0);
    ft_strcpy((char*)ft_memccpy(rt, s1, '\0', l_s1 + 1) - 1, s2);
    return (rt);
}

void    ft_bzero(void *s, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        *((char*)s + i) = '\0';
        i++;
    }
}

char    *ft_strdup(const char *s1)
{
    size_t  i;
    size_t  size;
    char    *dup;

    i = 0;
    size = ft_strlen(s1);
    dup = (char*)malloc(sizeof(char) * size + 1);
    while (i < size)
    {
        dup[i] = s1[i];
        i++;
    }
    dup[i] = 0;
    return (dup);
}

char        *ftoa(double n, int precision)
{
    char    tmp[50];
    char    tmp2[precision + 2];
    char    *rt;

    if (n == 0)
        return (ft_strdup("0.0"));
    ft_bzero(tmp, 50);
    ft_bzero(tmp2, precision + 2);
    r_ftoae(n, tmp, precision + 1);
    r_ftoai(n, tmp2, precision + 1);
    make_fprecision(tmp2, precision);
    rt = ft_strjoin(tmp, tmp2);
    return (rt);
}